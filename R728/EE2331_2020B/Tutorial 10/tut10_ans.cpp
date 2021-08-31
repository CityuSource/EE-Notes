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

#define MAX_TREE_SIZE 127

using namespace std;

template<class Type>
struct treeNode {
    Type info;
    treeNode<Type> *left;
    treeNode<Type> *right;
};

// ----------------------------------------------------------------------------------- function to be completed by you

/* 
 * Given the inorder and postorder traversal sequences of a tree, reconstruct
 * the tree with linked representation. Return a pointer to the root of the 
 * newly created tree.
 *
 * inorder[]		an array storing the inorder traversal sequence of the tree
 * inLow		    the starting index of the inorder sequence in inorder[]
 * inHigh		    the ending index of the inorder sequence in inorder[]
 * postorder[]		an array storing the postorder traversal sequence of the tree
 * postLow		    the starting index of the postorder sequence in postorder[]
 * postHigh		    the ending index of the postorder sequence in postorder[]
 * 
 * Precondition: keys in the tree nodes are distinct
 */
treeNode<char>* reconstructTreeUsingInorderPostorder(char inorder[], int inLow, int inHigh, char postorder[], int postLow, int postHigh) {

    //base case
    if ((inLow > inHigh))
        return NULL;

    //general case
    //the last node in postorder[] is the root node of the current subtree
    treeNode<char> *p = new treeNode<char>;
    p->info = postorder[postHigh];

    //to search for the index of the root of the current subtree in inorder[]
    int index = inLow;
    while (index <= inHigh && inorder[index] != postorder[postHigh]) {
        index++;
    }

    int leftTreeSize = index - inLow;
    p->left = reconstructTreeUsingInorderPostorder(inorder, inLow, index - 1, postorder, postLow, postLow + leftTreeSize - 1);
    p->right = reconstructTreeUsingInorderPostorder(inorder, index + 1, inHigh, postorder, postLow + leftTreeSize, postHigh - 1);
    return p;
}

// ----------------------------------------------------------------------------------- functions prepared for you

template<class Type>
void printTree(treeNode<Type> *p, int indent) {
    if (p != NULL) {
        //print right subtree, root, and then left subtree
        printTree(p->right, indent + 6);
        cout << setw(indent) << p->info << endl;
        printTree(p->left, indent + 6);
    }
}

 /*
  * Driver program
  *
  * Read the test cases from the input file and use them to test
  * your functions' implementation.
  *
  */
int main(int argc, char** argv) {

    ifstream fin("tut10_input.txt");
    if (!fin) {
        cout << "Input file not found.";
        exit(1);
    }

    int testcase = 0;
    fin >> testcase;
    fin.ignore();

    for (int i = 1; i <= testcase; i++) {

        char inorder[MAX_TREE_SIZE];
        char postorder[MAX_TREE_SIZE];
        treeNode<char> *tree;

        fin.getline(inorder, MAX_TREE_SIZE);
        fin.getline(postorder, MAX_TREE_SIZE);
        size_t len = strlen(postorder);

        cout << "Case " << i << endl;
        cout << "Inorder:\t" << inorder << endl;
        cout << "Postorder:\t" << postorder << endl;
        cout << "Reconstructed tree:" << endl;
        tree = reconstructTreeUsingInorderPostorder(inorder, 0, len - 1, postorder, 0, len - 1);
        printTree(tree, 0);
        cout << endl;

    }
}