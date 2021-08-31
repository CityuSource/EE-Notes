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


using namespace std;

// tree structure

template<class Type>
struct treeNode {
    Type key;
    treeNode<Type> *left;
    treeNode<Type> *right;
};

//-------------------------- functions to be implemented by you

bool isBST(treeNode<int>* root, treeNode<int>* min, treeNode<int>* max) {
    // Base condition
    if (root == NULL) return true;
    if (min != NULL and root->key <= min->key) return false;
    if (max != NULL and root->key >= max->key) return false;
    return isBST(root->left, min, root) and isBST(root->right, root, max);
}

bool isBST(treeNode<int>* root, treeNode<int>*& prev) {
    if (root) {
        if (!isBST(root->left, prev)) return false;
        if (prev != NULL && root->key <= prev->key) return false;
        prev = root;
        return isBST(root->right, prev);
    }
    return true;
}

//-------------------------- functions prepared for you

/*
 * Print a binary tree (rotated -90 degree).
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
 * Build a binary tree based on the array representation, where -1 represents
 * an empty tree node.
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

    ifstream fin("tut11_input.txt");
    if (!fin) {
        cout << "Input file not found.";
        exit(1);
    }

    int testcase = 0;
    fin >> testcase;

    for (int i = 0; i < testcase; i++) {

        int n;
        fin >> n;
        int* arr = new int[n];
        for (int j = 0; j < n; j++)
            fin >> arr[j];

        treeNode<int> *tree = buildTree(arr, 0, n);
        treeNode<int> *prev = NULL;
        cout << "Case " << i + 1 << endl;
        printTree(tree, 0);
        cout << endl;
        cout << "Is a BST? ";
        cout << " (1)" << (isBST(tree, NULL, NULL) ? "YES" : "NO");
        cout << " (2)" << (isBST(tree, prev) ? "YES" : "NO") << endl;
        cout << endl;

        delete[] arr;
    }

}

