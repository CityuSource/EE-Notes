/*
 *
 * Instructions:
 *
 * 1. Only complete the functions specified below.
 *    - Do not create any additional function.
 *    - Do not include any additional header or library.
 * 2. Use Visual Studio 2019 to build, test and run your code.
 * 3. Some test cases are provided for testing but not exhaustive. You may need to design additional test cases by yourself.
 * 4. Write down your full name and student ID below.
 *
 */

#include <cstdlib>
#include <cstring>
#include <fstream>
#include <iomanip>
#include <iostream>

using namespace std;

// tree structure

template <class T>
struct treeNode
{
    T key;
    treeNode<T> *left;
    treeNode<T> *right;
};

// ************************ DO NOT MODIFY THE CODE ABOVE *************************

//-------------------------- functions to be implemented by you --------------------------

/**
 * This function returns the disance from root to node x.
 * The distance between two nodes is defined by the number of edges between them.
 */
int distanceRootToX(treeNode<int> *root, int x)
{
    if (root == NULL)
        return -1;

    int res = -1;

    if ((root->key == x) || (res = distanceRootToX(root->left, x)) >= 0 || (res = distanceRootToX(root->right, x)) >= 0)
        return res + 1;

    return res;
}

/*
 * This function returns the disance from node x to node y.
 * The distance between two nodes is defined by the number of edges between them.
 */
int distanceXToY(treeNode<int> *root, int x, int y)
{
    if (root->key > x && root->key > y)
        return distanceXToY(root->left, x, y);

    if (root->key < x && root->key < y)
        return distanceXToY(root->right, x, y);

    return distanceRootToX(root, x) + distanceRootToX(root, y);
}

// ************************ DO NOT MODIFY THE CODE BELOW *************************

//-------------------------- functions prepared for you --------------------------

/*
 * Print a binary tree (with -90 degree rotation).
 */
template <class T>
void printTree(treeNode<T> *p, int indent)
{
    if (p != NULL)
    {
        printTree(p->right, indent + 6);
        cout << setw(indent) << '(' << p->key << ')' << endl;
        printTree(p->left, indent + 6);
    }
}

/*
 * Build a binary tree based on the array representation, where -1 represents
 * an empty tree node.
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
 * your implementation.
 *
 */
int main(int argc, char **argv)
{

    ifstream fin("exam03_input.txt");
    if (!fin)
    {
        cout << "Input file not found.";
        exit(1);
    }

    int testcase = 0;
    fin >> testcase;

    for (int i = 0; i < testcase; i++)
    {

        int n, x, y;
        fin >> n;
        int *arr = new int[n];
        for (int j = 0; j < n; j++)
            fin >> arr[j];

        fin >> x >> y;

        cout << "Case " << i + 1 << endl;
        treeNode<int> *tree = buildTree(arr, 0, n);
        printTree(tree, 0);

        cout << "Distance from root to " << x << "?\t" << distanceRootToX(tree, x) << endl;
        cout << "Distance from " << x << " to " << y << "?\t\t" << distanceXToY(tree, x, y) << endl
             << endl;

        delete[] arr;
    }
}
