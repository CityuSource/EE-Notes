#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <cstring>
#include <vector>
#include <cmath>
#include <iomanip>
#include <algorithm>
using namespace std;

template <class Type>
struct treeNode
{
    Type spot, order;
    int height, instability;
    treeNode<Type> *left;
    treeNode<Type> *right;

    void insert(treeNode<Type> *node)
    {
        if (node->spot < this->spot)
        {
            if (this->left == NULL)
                this->left = node;
            else
                this->left->insert(node);
        }
        else if (node->spot > this->spot)
        {
            if (this->right == NULL)
                this->right = node;
            else
                this->right->insert(node);
        }
    }
};

template <class Type>
treeNode<Type> *newNode(Type spot, Type order)
{
    treeNode<Type> *temp = new treeNode<Type>;
    temp->spot = spot;
    temp->order = order;
    temp->left = NULL;
    temp->right = NULL;
    return temp;
}

template <class Type>
void printTree(treeNode<Type> *p, int indent)
{
    if (p != NULL)
    {
        // print right subtree, root, and then left subtree
        printTree(p->right, indent + 6);
        cout << setw(indent) << p->spot << endl;
        printTree(p->left, indent + 6);
    }
}

template <class Type>
int findHeight(treeNode<Type> *p)
{
    if (!p->left && !p->right)
        return 0;

    int lHeight = -1;
    int rHeight = -1;

    if (p->left)
        lHeight = findHeight(p->left);

    if (p->right)
        rHeight = findHeight(p->right);

    p->height = max(lHeight, rHeight) + 1;
    lHeight++, rHeight++; // Just to make sure there aren't any negative numbers
    p->instability = abs(lHeight - rHeight);
    return p->height;
}

template <class Type>
treeNode<Type> *unstablest(treeNode<Type> *p)
{
    if (!p)
        return NULL;

    treeNode<Type> *lefty = unstablest(p->left);
    treeNode<Type> *righty = unstablest(p->right);
    treeNode<Type> *curr = p;

    if (lefty && (lefty->instability > curr->instability))
        curr = lefty;

    if (righty && (righty->instability > curr->instability))
        curr = righty;

    if (lefty && righty)
        if (lefty->instability == righty->instability)
            return p;

    return curr;
}

int main()
{
    // ios::sync_with_stdio(false);
    freopen("input.in", "r", stdin);
    freopen("output.out", "w", stdout);
    // vector<int> results;
    int n, counter = 0;
    cin >> n;
    while (counter < n)
    {
        vector<int> input;
        int count, temp;
        cin >> count;
        treeNode<int> *root = newNode(temp, 0);
        for (int i = 1; i < count; i++)
        {
            cin >> temp;
            root->insert(newNode(temp, i));
        }
        findHeight(root);
        treeNode<int> *unstable = unstablest(root);
        printf("Flock #%d: %d\n\n", ++counter, unstable->spot);
        // results.push_back(unstable->spot);
    }
    // for (int i = 0; i < results.size(); i++)
    //     printf("Flock #%d: %d\n\n", i + 1, results[i]);
}