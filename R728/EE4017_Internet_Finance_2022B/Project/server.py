from hashlib import sha256
import Crypto
import Crypto.Random
from Crypto.PublicKey import RSA
from Crypto.Signature import PKCS1_v1_5
from Crypto.Hash import SHA
import binascii
import json
import requests
from flask import Flask, jsonify, request
from urllib.parse import urlparse
import datetime
import sys

app = Flask(__name__)
difficultyv = 2
interest_rate = 0.01


@app.route('/new_transaction', methods=['POST'])
def new_transaction():
    values = request.form
    required = ['recipient_address', 'amount']
    # Check that the required fields are in the POST data
    if not all(k in values for k in required):
        return 'Missing values', 400
    #8. Able to check the balance before confirming a transaction
    if usable_balance(myWallet.identity)<value['amount']:
        response = {'message': 'Usable balance not enough!'}
        return jsonify(response), 406

    transaction = Transaction(myWallet.identity, values['recipient_address'], values['amount'])
    transaction.add_signature(myWallet.sign_transaction(transaction))
    transaction_result = blockchain.add_new_transaction(transaction)
    if transaction_result:
        response = {'message': 'Transaction will be added to Block.'}
        return jsonify(response), 201
    else:
        response = {'message': 'Invalid Transaction!'}
        return jsonify(response), 406


@app.route('/get_transactions', methods=['GET'])
def get_transactions():
    # Get transactions from transactions pool
    transactions = blockchain.unconfirmed_transactions
    response = {'transactions': transactions}
    return jsonify(response), 200


@app.route('/chain', methods=['GET'])
def part_chain():
    response = {
        'chain': blockchain.chain[-10:],
        'length': len(blockchain.chain),
    }
    return jsonify(response), 200


@app.route('/fullchain', methods=['GET'])
def full_chain():
    response = {
        'chain': json.dumps(blockchain.chain),
        'length': len(blockchain.chain),
    }
    return jsonify(response), 200


@app.route('/get_nodes', methods=['GET'])
def get_nodes():
    nodes = list(blockchain.nodes)
    response = {'nodes': nodes}
    return jsonify(response), 200


@app.route('/register_node', methods=['POST'])
def register_node():
    values = request.form
    node = values.get('node')
    com_port = values.get('com_port')
    # handle type B request
    if com_port is not None:
        blockchain.register_node(request.remote_addr + ":" + com_port)
        return "ok", 200
    # handle type A request
    if node is None and com_port is None:
        return "Error: Please supply a valid nodes", 400
    blockchain.register_node(node)
    # retrieve nodes list
    node_list = requests.get('http://' + node + '/get_nodes')
    if node_list.status_code == 200:
        node_list = node_list.json()['nodes']
        for node in node_list:
            blockchain.register_node(node)
    for new_nodes in blockchain.nodes:
        # sending type B request
        requests.post('http://' + new_nodes + '/register_node', data={'com_port': str(port)})
    # check if our chain is authoritative from other nodes
    replaced = blockchain.consensus()
    if replaced:
        response = {
            'message': 'Longer authoritative chain found from peers,replacing ours',
            'total_nodes': [node for node in blockchain.nodes]
        }
    else:
        response = {
            'message': 'New nodes have been added, but our chain is authoritative',
            'total_nodes': [node for node in blockchain.nodes]
        }
    return jsonify(response), 201

#6. Able to connect peers and sync the whole blockchain
@app.route('/consensus', methods=['GET'])
def consensus():
    replaced = blockchain.consensus()
    if replaced:
        response = {
            'message': 'Our chain was replaced',
        }
    else:
        response = {
            'message': 'Our chain is authoritative',
        }
    return jsonify(response), 200


@app.route('/mine', methods=['GET'])
def mine():
    newblock = blockchain.mine(myWallet)
    for node in blockchain.nodes:
        requests.get('http://' + node + '/consensus')
    response = {
        'index': newblock.index,
        'transactions': newblock.transactions,
        'timestamp': newblock.timestamp,
        'nonce': newblock.nonce,
        'hash': newblock.hash,
        'previous_hash': newblock.previous_hash
    }
    return jsonify(response), 200


# _______________________________________________________________________________


@app.route('/fullchain2', methods=['GET'])
def full_chain2():
    response = {
        'chain': json.dumps(blockchain.chain),
        'length': len(blockchain.chain),
    }
    x = json.dumps(response).replace('\\', '').replace('"{', '{').replace('}"', '}').replace('"[', '[').replace(']"',
                                                                                                                ']')
    return x, 200


@app.route('/get_transactions2', methods=['GET'])
def get_transactions2():
    # Get transactions from transactions pool
    transactions = blockchain.unconfirmed_transactions
    response = {'transactions': transactions}
    x = json.dumps(response).replace('\\', '').replace('"{', '{').replace('}"', '}').replace('"[', '[').replace(']"',
                                                                                                                ']')
    return x, 200


@app.route('/show_balance', methods=['POST'])
def show_balance():
    values = request.form
    required = ['address']
    # Check that the required fields are in the POST data
    if not all(k in values for k in required):
        return 'Missing values', 400
    address = values.get('address')
    c_balance = blockchain.Current_balance(address)
    h_balance = blockchain.Holded_balance(address)

    # x = "your checkable balance is " + str(c_balance-h_balance) + "(" + str(c_balance) +"-"+ str(h_balance) +"(holded))"
    # return x, 200
    return str(c_balance - h_balance), 200


@app.route('/confirmed_balance', methods=['GET'])
def confirmed_balance():
    address = request.args['address']
    return str(blockchain.Current_balance(address)), 200


@app.route('/unconfirm_balance', methods=['GET'])
def unconfirm_balance():
    address = request.args['address']
    return str(blockchain.Holded_balance(address)), 200


@app.route('/usable_balance', methods=['GET'])
def usable_balance(address=None):
    if address is None:
        address = request.args['address']
    hold = blockchain.Holded_balance(address)
    if hold < 0:
        hold = 0
    return str(blockchain.Current_balance(address) - hold), 200


@app.route('/public_key12341234', methods=['GET'])
def public_key12341234():
    return myWallet.identity


"""
@app.route('/private_key12341234', methods=['GET'])
def private_key12341234():
    return myWallet.identity1
"""


@app.route('/get_diff', methods=['GET'])
def get_diff():
    return str(difficultyv)


@app.route('/get_interest', methods=['GET'])
def get_interest():
    return str(interest_rate)


@app.route('/account_list', methods=['GET'])
def account_list():
    a_list = blockchain.check_all_account()
    return "".join(str(x) for x in a_list)

#10. Able to charge transaction fee from the sender of the transaction
@app.route('/charge_transactions_fee', methods=['POST'])
def charge_transactions_fee():
    values = request.form
    required = ['fee']
    # Check that the required fields are in the POST data
    if not all(k in values for k in required):
        return 'Missing values', 400
    fee = Transaction(myWallet.identity, 'fee', values['amount'])
    fee.add_signature(myWallet.sign_transaction(fee))
    fee_result = blockchain.add_new_transaction(fee)
    if fee_result:
        response = {'message': 'Fee will be added to Block '}
        return jsonify(response), 201
    else:
        response = {'message': 'Invalid Fee!'}
        return jsonify(response), 406

# 2. Able to perform transactions
class Transaction:
    def __init__(self, sender, recipient, value):
        self.sender = sender
        self.recipient = recipient
        self.value = value

    def to_dict(self):
        return ({
            'sender': self.sender,
            'recipient': self.recipient,
            'value': self.value})

    def add_signature(self, signature):
        self.signature = signature

    def verify_transaction_signature(self):
        if hasattr(self, 'signature'):
            public_key = RSA.importKey(binascii.unhexlify(self.sender))
            verifier = PKCS1_v1_5.new(public_key)
            h = SHA.new(str(self.to_dict()).encode('utf8'))
            return verifier.verify(h, binascii.unhexlify(self.signature))
        else:
            return False

    def to_json(self):
        return json.dumps(self.__dict__, sort_keys=False)

# 1. Able to generate a new wallet
class Wallet:
    def __init__(self):
        random = Crypto.Random.new().read
        self._private_key = RSA.generate(1024, random)
        self._public_key = self._private_key.publickey()

    def sign_transaction(self, transaction: Transaction):
        signer = PKCS1_v1_5.new(self._private_key)
        h = SHA.new(str(transaction.to_dict()).encode('utf8'))
        return binascii.hexlify(signer.sign(h)).decode('ascii')

    @property
    def identity(self):
        pubkey = binascii.hexlify(self._public_key.exportKey(format='DER'))
        return pubkey.decode('ascii')

    @property
    def privatekey(self):
        prikey = binascii.hexlify(self._private_key.exportKey(format='DER'))
        return prikey.decode('ascii')

#4. Able to generate new blocks using proof-of work consensus protocol
class Block:
    def __init__(self, index, transactions, timestamp, previous_hash, hashx=None, nonce=0):
        self.index = index
        self.transactions = transactions
        self.timestamp = timestamp
        self.previous_hash = previous_hash
        self.hash = hashx
        self.nonce = nonce
        global difficultyv
        self.difficulty = difficultyv

    def to_dict(self):
        return ({
            'index': self.index,
            'transactions': self.transactions,
            'timestamp': self.timestamp,
            'previous_hash': self.previous_hash,
            'nonce': self.nonce}
        )

    def to_json(self):
        return json.dumps(self.__dict__)

    def compute_hash(self):
        return sha256(str(self.to_dict()).encode()).hexdigest()


class Blockchain:
    global difficultyv
    difficulty = difficultyv
    nodes = set()

    def __init__(self):
        self.unconfirmed_transactions = []
        self.chain = []
        self.create_genesis_block()

    def create_genesis_block(self):
        block_reward = Transaction("Block_Reward", myWallet.identity, "5.0").to_json()
        genesis_block = Block(0, [block_reward], datetime.datetime.now().strftime("%m/%d/%Y, %H:%M:%S"), "0")
        genesis_block.hash = genesis_block.compute_hash()
        self.chain.append(genesis_block.to_json())

    def add_new_transaction(self, transaction: Transaction):
        if transaction.verify_transaction_signature():
            self.unconfirmed_transactions.append(transaction.to_json())
            return True
        else:
            return False

    def add_block(self, block, proof):
        previous_hash = self.last_block['hash']
        if previous_hash != block.previous_hash:
            return False
        if not self.is_valid_proof(block, proof):
            return False
        block.hash = proof
        self.chain.append(block.to_json())
        return True

    def is_valid_proof(self, block, block_hash):
        return block_hash.startswith('0' * block.difficulty) and block_hash == block.compute_hash()

    def proof_of_work(self, block):
        block.nonce = 0
        computed_hash = block.compute_hash()
        print(block.difficulty)
        while not computed_hash.startswith('0' * block.difficulty):
            block.nonce += 1
            computed_hash = block.compute_hash()
        return computed_hash

#3. Able to generate coins reward
    def mine(self, myWallet):

        self.pay_interset()

        block_reward = Transaction("Block_Reward", myWallet.identity, "5.0").to_json()
        self.unconfirmed_transactions.insert(0, block_reward)
        if not self.unconfirmed_transactions:
            return False

        new_block = Block(index=self.last_block['index'] + 1,
                          transactions=self.unconfirmed_transactions,
                          timestamp=datetime.datetime.now().strftime("%m/%d/%Y, %H:%M:%S"),
                          previous_hash=self.last_block['hash'])
        proof = self.proof_of_work(new_block)
        if self.add_block(new_block, proof):
            self.unconfirmed_transactions = []
            global difficultyv
            difficultyv = self.next_difficulty(self.last_block)
            return new_block
        else:
            return False

    @property
    def last_block(self):
        return json.loads(self.chain[-1])

    def register_node(self, node_url):
        # Checking node_url has valid format
        parsed_url = urlparse(node_url)
        if parsed_url.netloc:
            self.nodes.add(parsed_url.netloc)
        elif parsed_url.path:
            # Accepts an URL without scheme like '192.168.0.5:5000'.
            self.nodes.add(parsed_url.path)
        else:
            raise ValueError('Invalid URL')

#5. Able to broadcast new blocks to the rests of connected peers
    def consensus(self):
        # print("called consensus")
        neighbours = self.nodes
        new_chain = None
        # We're only looking for chains longer than ours
        max_length = len(self.chain)
        # Grab and verify the chains from all the nodes in our network
        for node in neighbours:
            response = requests.get('http://' + node + '/fullchain')
            print("checking" + node + "fullchain")
            if response.status_code == 200:
                print("hummm")
                length = response.json()['length']
                chain = response.json()['chain']
                # Check if the length is longer and the chain is valid
                print(length)
                print(chain)
                val = self.valid_chain(chain)
                print(val)
                if length > max_length and val:
                    print("replace")
                    max_length = length
                    new_chain = chain
        # Replace our chain if longer chain is found
        if new_chain:
            self.chain = json.loads(new_chain)
            return True
        return False

#7. Able to reject malformed blocks
    def valid_chain(self, chain):
        # check if a blockchain is valid
        current_index = 0
        chain = json.loads(chain)
        while current_index < len(chain):
            block = json.loads(chain[current_index])
            current_block = Block(block['index'],
                                  block['transactions'],
                                  block['timestamp'],
                                  block['previous_hash'],
                                  block['hash'],
                                  block['nonce'])
            if current_index + 1 < len(chain):
                if current_block.compute_hash() != json.loads(chain[current_index + 1])['previous_hash']:
                    return False
            if isinstance(current_block.transactions, list):
                for transaction in current_block.transactions:
                    transaction = json.loads(transaction)
                    # skip Block reward because it does not have signature
                    if transaction['sender'] == 'Block_Reward':
                        continue
                    current_transaction = Transaction(transaction['sender'],
                                                      transaction['recipient'],
                                                      transaction['value'],
                                                      transaction['signature'])
                    # validate digital signature of each transaction
                    if not current_transaction.verify_transaction_signature():
                        return False
                    if not self.is_valid_proof(current_block, block['hash']):
                        return False
                current_index += 1
            return True

    def Current_balance(self, address: str) -> float:
        if len(self.chain) <= 0:
            return -999

        c_balance = 0.0

        for block in self.chain:
            data_b = json.loads(block)
            data_t = data_b["transactions"]
            for t in data_t:
                t = eval(t)
                if address == t["recipient"]:
                    c_balance += float(t["value"])
                elif address == t["sender"]:
                    c_balance -= float(t["value"])
        print(c_balance)
        return c_balance

    def Holded_balance(self, address: str) -> float:
        if len(self.unconfirmed_transactions) <= 0:
            return 0

        h_balance = 0.0

        for t in self.unconfirmed_transactions:
            t = eval(t)
            if address == t["recipient"]:
                h_balance += float(t["value"])
            elif address == t["sender"]:
                h_balance -= float(t["value"])
        print(h_balance)
        return h_balance

    def check_all_account(self):
        accounts = set()
        for block in self.chain:
            block = eval(block)
            for t in block["transactions"]:
                t = eval(t)
                if t["sender"] != "Block_Reward" and t["sender"] != "Interest":
                    accounts.add(t["sender"])
                accounts.add(t["recipient"])
        return list(accounts)

#9. Able to give interest to coins holder
    def pay_interset(self):
        account_list = blockchain.check_all_account()
        for ac in account_list:
            balance = self.Current_balance(ac)
            interest = balance * interest_rate
            temp_trans = Transaction("Interest", ac, str(interest)).to_json()
            self.unconfirmed_transactions.append(temp_trans)

#11. Able to change difficulty when the hash power of the network change
    def next_difficulty(self, last_block) -> int:

        difficulty = last_block['difficulty']

        if len(self.chain) >= 2:
            recent_blocks = [eval(block) for block in self.chain[-2:]]
            timestamps = list(
                map(lambda x: datetime.datetime.strptime(x["timestamp"], "%m/%d/%Y, %H:%M:%S"), recent_blocks))
            difference = timestamps[1] - timestamps[0]
            print(difference.seconds)
            if difference.total_seconds() < 10 and difficulty < 5:
                difficulty += 1
            elif difference.total_seconds() > 30 and difficulty > 1:
                difficulty -= 1
        return difficulty


if __name__ == '__main__':
    myWallet = Wallet()
    print(myWallet.identity)  # public
    print(myWallet.identity1)
    blockchain = Blockchain()
    port = int(sys.argv[1])
    app.run(host='0.0.0.0', port=port)
