/*
 * Instructions:
 *
 * 1. Only complete the functions specified below. Do not create any additional function.
 * 2. Use Visual Studio 2019 to build, test and run your code.
 * 3. Do not include any additional header or library.
 *
 */

#include <cstdlib>
#include <cstring>
#include <iostream>
#include <iomanip>
#include <fstream>
#include <queue>


using namespace std;

// tree structure

template<class Type>
struct treeNode {
    Type key;
    treeNode<Type> *left;
    treeNode<Type> *right;
};

//-------------------------- functions to be implemented by you

/**
 * This function checks if the given tree is a complete tree. 
 * It returns true if the tree is complete; otherwise return false.
 */
bool isComplete(treeNode<int>* root) {

    // Please refer to lecture notes p.57 and p.78 for the example
    // of level order tree traversal. You can use queue to perform level 
    // order traversal in this exercise.

    // By observation of a complete tree, we can see that with a level order traversal 
    // starting from the root, once a node is found which is not degree 2, all the 
    // following nodes must be degree 0.

    queue<treeNode<int>*> mqueue;

    if (root != NULL)
        mqueue.push(root);

    bool notDegree2 = false;
    while (!mqueue.empty()) {
        treeNode<int>* cur = mqueue.front();
        mqueue.pop();

        if (cur->left == NULL) {
            notDegree2 = true;          // cur node may be degree 0 or 1    
            if (cur->right != NULL)
                return false;           // because cur node has right child but no left child
        } else {
            if (notDegree2)
                return false;           // because cur node has a left child - not degree 0

            mqueue.push(cur->left);
            if (cur->right == NULL)          
                notDegree2 = true;              // cur node is degree 1    
            else    
                mqueue.push(cur->right);        // cur node is degree 2   
        }
    }

    return true;    // run through the tree and all nodes follow our observation
}

//-------------------------- functions prepared for you

/*
 * Print a binary tree (rotated by -90 degree).
 */
template<class Type>
void printTree(treeNode<Type> *p, int indent) {
    if (p != NULL) {
        printTree(p->right, indent + 6);
        cout << setw(indent) << '(' << p->key << ')' << endl;
        printTree(p->left, indent + 6);
    }
}

/*
 * Build a binary tree based on the array representation, where -1 
 * in the input represents an empty tree node.
 */
treeNode<int>* buildTree(int *array, int index, int size) {
    treeNode<int>* t = NULL;

    if (index < size && array[index] != -1) {
        t = new treeNode<int>();
        t->key = array[index];
        t->left = buildTree(array, 2 * index + 1, size);
        t->right = buildTree(array, 2 * index + 2, size);
    }
    return t;
}

/*
 * Driver program
 *
 * Read the test cases from the input file and use them to test
 * your functions' implementation.
 *
 */
int main(int argc, char** argv) {

    ifstream fin("tut09_input.txt");
    if (!fin) {
        cout << "Input file not found.";
        exit(1);
    }

    int n, testcase = 0;
    fin >> testcase;
    for (int i = 1; i <= testcase; i++) {
        
        fin >> n;
        int* arr1 = new int[n];
        for (int j = 0; j < n; j++)
            fin >> arr1[j];

        cout << "Case " << i << endl;
        treeNode<int> *tree = buildTree(arr1, 0, n);
        printTree(tree, 0);
        cout << "Is complete? " << (isComplete(tree) ? "Yes" : "No") << endl << endl;
    }

    return 0;
}

