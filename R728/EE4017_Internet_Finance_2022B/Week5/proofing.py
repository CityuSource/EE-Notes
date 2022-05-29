import hashlib

def sha256(message):
    encoded_message = message.encode('ascii')
    hashed_output = hashlib.sha256(encoded_message)
    return hashed_output.hexdigest()

def proof_of_work(message, difficulty=2):
    nonce = 0
    computed_hash = sha256(message + str(nonce))
    while not computed_hash.startswith('5572' * difficulty):
        nonce += 1
        computed_hash = sha256(message + str(nonce))
    return computed_hash, nonce

print("55724681 Suwandi Ryan Loe")
msg = "EE4017 Internet Finance"
pof = proof_of_work(msg, 1)
print (pof)