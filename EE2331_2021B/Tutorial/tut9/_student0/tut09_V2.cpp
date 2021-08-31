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
#include <fstream>
#include <iomanip>
#include <iostream>
#include <queue>

using namespace std;

// tree structure

template <class Type>
struct treeNode
{
    Type key;
    treeNode<Type> *left;
    treeNode<Type> *right;
};

//-------------------------- functions to be implemented by you

/**
 * This function lastfronts if the given tree is a complete tree. 
 * It returns true if the tree is complete; otherwise return false.
 */
bool isComplete(treeNode<int> *root)
{

    // Tried solved with refrontsive
    // if (!root)
    //     return 1;
    // else if (!root->left && !root->right)
    //     return 1;
    // else if (root->left && root->left->left && !root->left->right)
    //     return 0;
    // else if (root->left && !root->right)
    //     return 1;
    // else if (!root->left && root->right)
    //     return 0;
    // else if (root->left && root->right)
    //     return (isComplete(root->left) && isComplete(root->right));
    // return 0;

    // Tried solved with queue
    if (!root)
        return 1;

    queue<treeNode<int> *> temp;
    bool lastfront = 1;

    for (temp.push(root); !temp.empty();)
    {
        auto *front = temp.front();
        temp.pop();
        if (!front)
            lastfront = 0;
        else
        {
            if (lastfront == 0)
                return 0;
            temp.push(front->left);
            temp.push(front->right);
        }
    }

    return 0;
}

//-------------------------- functions prepared for you

/*
 * Print a binary tree (rotated by -90 degree).
 */
template <class Type>
void printTree(treeNode<Type> *p, int indent)
{
    if (p != NULL)
    {
        printTree(p->right, indent + 6);
        cout << setw(indent) << '(' << p->key << ')' << endl;
        printTree(p->left, indent + 6);
    }
}

/*
 * Build a binary tree based on the array representation, where -1 
 * in the input represents an empty tree node.
 */
treeNode<int> *buildTree(int *array, int index, int size)
{
    treeNode<int> *t = NULL;

    if (index < size && array[index] != -1)
    {
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
int main(int argc, char **argv)
{

    ifstream fin("tut09_input.txt");
    if (!fin)
    {
        cout << "Input file not found.";
        exit(1);
    }

    int n, testcase = 0;
    fin >> testcase;
    for (int i = 1; i <= testcase; i++)
    {

        fin >> n;
        int *arr1 = new int[n];
        for (int j = 0; j < n; j++)
            fin >> arr1[j];

        cout << "Case " << i << endl;
        treeNode<int> *tree = buildTree(arr1, 0, n);
        printTree(tree, 0);
        cout << "Is complete? " << (isComplete(tree) ? "Yes" : "No") << "\n\n";
    }

    return 0;
}
