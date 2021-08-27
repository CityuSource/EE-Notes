//binaryTree.h

//To avoid the tedious details, only the implementation of some selected 
//member functions are given below.
#ifndef BINARY_TREE_H
#define BINARY_TREE_H

#include <stack>  		//required by the iterator
#include <iostream>
#include <iomanip>

using namespace std;


template<class Type>
struct treeNode {
	Type info;
	treeNode<Type> *left, *right;
};

template<class Type>
class treeIterator {
	protected:
		treeNode<Type> *current;
		stack<treeNode<Type>*> S;			// store treeNode pointers

	public:
		treeIterator(treeNode<Type> *p);
		treeIterator(const treeIterator<Type>& other);
		Type& operator*();
		treeIterator<Type>& operator++(); 	//pre-increment operator
		bool operator==(const treeIterator<Type>& other);
		bool operator!=(const treeIterator<Type>& other);
};


template<class Type>
class binaryTree {
	protected:
		treeNode<Type> *root; 				//point to root node of the tree

	public:
		binaryTree();
		binartTree(const binaryTree<Type>& other);
		~binaryTree();
		const binaryTree<Type>& operator=(const binaryTree<Type>& other);
		bool empty();
		void initialize();
		void destroy();
		int height();    		//note that the public member functions
		int nodeCount(); 		//should not require any private member
		void print();    		//variables as input parameters

		//(*visit) is a function pointer
		void preorderTraversal(void (*visit)(treeNode<Type>*));		
		void inorderTraversal(void (*visit)(treeNode<Type>*));
		void postorderTraversal(void (*visit)(treeNode<Type>*));

		void insert(Type& item) = 0;	//pure virtual functions,
		void remove(Type& item) = 0;	

		treeIterator<Type> begin();
		treeIterator<Type> end();

	private:
		void destroy(treeNode<Type> *p);
		int height(treeNode<Type> *p);
		void printTree(treeNode<Type> *p, int indent);
		treeNode<Type>* copyTree(const treeNode<Type>* other);
		void preorder(treeNode<Type> *p, void (*visit)(treeNode<Type>*));
		void inorder(treeNode<Type> *p, void (*visit)(treeNode<Type>*));
		void postorder(treeNode<Type> *p, void (*visit)(treeNode<Type>*));

};

//------------------------------------------------ Member functions of binaryTree

template<class Type>
bool binaryTree<Type>::empty() {
	return root == NULL;
}

template<class Type>
void binaryTree<Type>::initialize() {
	root = NULL;
}

template<class Type>
int binaryTree<Type>::height() {
	return height(root);  //call the private function
}

template<class Type>
int height(treeNode<Type> *tree) {
	if (tree == NULL)
		return 0;

	if ((tree->left == NULL) && (tree->right == NULL))
		return 0;

	int HL = height(tree->left);
	int HR = height(tree->right);

	if (HL > HR)
		return 1+HL;
	else
		return 1+HR;
}

template<class Type>
void binaryTree<Type>::print() {
	printTree(root, 3);  //initially, indent = 3
}

template<class Type>
void printTree(treeNode<Type> *p, int indent) {
	if (p != NULL) {
		//print right subtree, root, and then left subtree
		printTree(p->right, indent+3);
		cout << setw(indent) << p->info << endl;
		printTree(p->left, indent+3);
	}
}

template<class Type>
const binaryTree<Type>& binaryTree<Type>::operator= (const binaryTree<Type>& other) {
	if (this != &other) {
		destroy(); 		//clear the contents of *this
		root = copyTree(other.root);
	}
	return *this;
}

template<class Type>
treeNode<Type>* copyTree_2(treeNode<Type> *other) {
	if (other == NULL)
		return NULL;

	treeNode<Type> *p = new treeNode<Type>;
	p->info = other->info;
	p->left = copyTree_2(other->left);
	p->right = copyTree_2(other->right);

	return p;
}

template<class Type>
void binaryTree<Type>::destroy() { 	//public function
	destroy(root);  				//call the private function
	root = NULL;
}

template<class Type>
void binaryTree<Type>::destroy(treeNode<Type> *p) { 	//private function
	// destroy a binary tree based on postorder traversal
	if (p != NULL) {
		destroy(p->left);
		destroy(p->right);
		delete p;
	}
}

template<class Type>
void binaryTree<Type>::postorderTraversal(void (*visit)(treeNode<Type>*)) {
	postorder(root, visit);
}

template<class Type>
void binaryTree<Type>::postorder(treeNode<Type> *p, void (*visit)(treeNode<Type>*)) {
	if (p != NULL) {
		postorder(p->left, visit);
		postorder(p->right, visit);
		(*visit)(p); 	//call function (*visit) to process the node
	}
}


template<class Type>
treeIterator<Type> binaryTree<Type>::begin() {
	//return an (inorder) iterator that refers to the first element
	return treeIterator<Type>(root);
}

template<class Type>
treeIterator<Type> binaryTree<Type>::end() {
	//return an iterator that refers to the element pass the last element
	return treeIterator<Type>(NULL);
}


//------------------------------------------------ Member functions of treeIterator

//Iterator loops over the collection one-by-one, so recursive
//traversal is not suitable here. The treeIterator should
//support non-recursive (inorder) traversal of the underlying
//binary tree.

//reference the non-recursive inorder traversal algorithm

template<class Type>
treeIterator<Type>::treeIterator(treeNode<Type> *p) {
	//constructor
	current = NULL;

	while (p != NULL) {
		S.push(p);
		p = p->left;
	}
	if (!S.empty()) {
		current = S.top();		// the leftmost leaf node
		S.pop();
	}
}

template<class Type>
treeIterator<Type>& treeIterator<Type>::operator++() {
	//advance current to point to its inorder successor
	if (current != NULL) {
		current = current->right;
		while(current != NULL);
		{
			S.push(current);
			current = current->left;
		}
		if (!S.empty()) {
			current = S.top();
			S.pop();
		}
	} else
		cerr << "Error: treeIterator gets out of bound" << endl;

	return *this;
}


template<class Type>
treeIterator<Type>::treeIterator(const treeIterator<Type>& other) {
	current = other.current;
	S = other.S;
}


template<class Type>
Type& treeIterator<Type>::operator*() {
	return current->info;
}


template<class Type>
bool treeIterator<Type>::operator==(const treeIterator<Type>& other) {
	//determine if *this and other are referring to the same tree node
	return current == other.current;
}


template<class Type>
bool treeIterator<Type>::operator!=(const treeIterator<Type>& other) {
	return current != other.current;
}

#endif  //end of file binaryTree.h

