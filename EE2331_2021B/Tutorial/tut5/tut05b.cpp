#include <cstdio>
#include <cstdlib>
#include <fstream>
#include <iostream>
#include <stack>

using namespace std;

struct node
{
    int data;
    node *next;
};

// reverse list by using stack (<stack> library)
node *reverseList(node *head)
{
    stack<node *> stack;

    for (auto *cur = head; cur; cur = cur->next)
        stack.push(cur);

    node dummy = {(int)NULL, nullptr}, *temp = nullptr;
    for (temp = &dummy; !stack.empty(); stack.pop(), temp = temp->next)
        temp->next = stack.top();
    temp->next = nullptr;

    return dummy.next;
}

class ListHelper
{
public:
    // build a list based on array input
    static node *newList(int *arr, int n)
    {

        node dummy = {n, NULL};
        node *cur = &dummy;
        for (int i = 0; i < n; i++)
        {
            cur->next = new node({arr[i], NULL});
            cur = cur->next;
        }
        return dummy.next; // without dummy header
    }

    //print nodes in a given linked list
    static void printList(node *list)
    {
        while (list != NULL)
        {
            printf("[%d]-> ", list->data);
            list = list->next;
        }
        cout << "NULL" << endl;
    }

    //delete nodes in a given linked list
    static void deleteList(node *list)
    {
        node *temp;
        while (list != NULL)
        {
            temp = list;
            list = list->next;
            delete temp;
        }
    }
};

int main(int argc, char **argv)
{

    ifstream fin("tut05_input.txt");
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

        node *list = ListHelper::newList(arr, n);

        cout << "Case " << i + 1 << endl;
        cout << "Input:\t\t";
        ListHelper::printList(list);

        cout << "Reversed:\t";
        list = reverseList(list);
        ListHelper::printList(list);
        cout << endl;

        ListHelper::deleteList(list);
        delete[] arr;
    }

    return 0;
}
