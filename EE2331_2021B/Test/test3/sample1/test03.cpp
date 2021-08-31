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
 *
 */

#include <cstdlib>
#include <cstring>
#include <fstream>
#include <iomanip>
#include <iostream>

using namespace std;

// tree structure

template <class Type>
struct treeNode
{
    Type key;
    treeNode<Type> *left;
    treeNode<Type> *right;
};

// ************************ DO NOT MODIFY THE CODE ABOVE *************************

//-------------------------- functions to be implemented by you --------------------------

/**
 * Check if the given binary tree is a min tree. 
 * This function returns true if the tree is a min tree. Otherwise, it returns false.
 * 
 */
bool isMinTree(treeNode<int> *root)
{
    if (!root)
        return true;
    else if (root->left && root->left->key < root->key)
        return false;
    else if (root->right && root->right->key < root->key)
        return false;

    return isMinTree(root->left) && isMinTree(root->right);
}

/*
 * Find the maximum path sum of the given binary tree.
 * A maximum path is defined as a path from root to leaf that has the maximum sum of the keys.
 * This function returns the sum of the keys on the maximum path.
 *
 */
int maxPathSum(treeNode<int> *root)
{
    if (!root)
        return 0;

    auto maxleft = max(0, maxPathSum(root->left));
    auto maxright = max(0, maxPathSum(root->right));
    return max(maxleft, maxright) + root->key;
}

// ************************ DO NOT MODIFY THE CODE BELOW *************************

//-------------------------- functions prepared for you --------------------------

/*
 * Print a binary tree (with -90 degree rotation).
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

    ifstream fin("test03_input.txt");
    if (!fin)
    {
        cout << "Input file not found.";
        exit(1);
    }

    int testcase = 0;
    fin >> testcase;

    for (int i = 0; i < testcase; i++)
    {

        int n;
        fin >> n;
        int *arr = new int[n];
        for (int j = 0; j < n; j++)
            fin >> arr[j];

        cout << "Case " << i + 1 << endl;
        treeNode<int> *tree = buildTree(arr, 0, n);
        // printTree(tree, 0);

        cout << "Is a min tree?\t" << (isMinTree(tree) ? "YES" : "NO") << endl;
        cout << "Max path sum:\t" << maxPathSum(tree) << endl
             << endl;

        delete[] arr;
    }
}
