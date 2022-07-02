/*
 * Instructions:
 *
 * 1. Only complete the functions specified below. Do not create any additional function.
 * 2. Use Visual Studio 2019 to build, test and run your code.
 * 3. Do not include any additional header or library.
 * 4. This is an exercise of linked list operations. Do not copy linked lists to arrays for manipulation.
 * 5. Implement the function reverseList() and the class MyStack as specified below.
 * 6. All linked lists in this exercise are singly-linked, non-circular and without header node.
 *
 */

#include <cstdlib>
#include <cstdio>
#include <iostream>
#include <fstream>

using namespace std;

/* Linked list node */
template <class T>
struct node
{
	T data;
	node<T> *next;
};

/* 
 * Stack ADT 
 * Please refer to the definition of stack's functions in the lecture notes. 
 */
template <class T>
class AbstractStack
{

public:
	virtual int size() const = 0;
	virtual bool empty() const = 0;
	virtual T &top() const = 0;
	virtual void push(const T &item) = 0;
	virtual void pop() = 0;
};

//-------------------------- classes/functions to be implemented by you

/*
 * Linked list implementation of the AbstractStack.
 * 
 * Complete the five functions: size, empty, top, push and pop, according to their definition.
 */
template <class T>
class MyStack : public AbstractStack<T>
{

private:
	node<T> *head; // internal linked list for storing the stack's items
	int length;	   // length of the internal linked list - used to track the stack's size

public:
	MyStack()
	{
		head = NULL;
		length = 0;
	}

	~MyStack()
	{
		node<T> *temp;
		while (head != NULL)
		{
			temp = head;
			head = head->next;
			delete temp;
		}
	}

	bool empty() const
	{
		return length <= 0;
	}

	int size() const
	{
		return length;
	}

	void push(const T &item)
	{
		length++;
		head = new node<T>({item, head});
	}

	// precondition: stack is not empty
	T &top() const
	{
		return head->data;
	}

	void pop()
	{
		if (!empty())
		{
			node<T> *temp = head;
			head = head->next;
			length--;
			delete temp;
		}

		else
			cerr << "Stack underflow!" << endl;
	}
};

/*
 * The function uses a stack to reverse the link in the nodes of the input list. 
 * It returns the head of the reversed list.
 */
node<int> *reverseList(node<int> *head)
{
	// Use this stack to reverse the list.
	// It is used to store node pointers instead of node data.
	MyStack<node<int> *> stack;

	for (auto *temp = head; temp; temp = temp->next)
		stack.push(temp);

	if (stack.empty())
		return nullptr;

	node<int> *temp = stack.top();
	stack.pop();
	head = temp;

	while (!stack.empty())
	{
		temp->next = stack.top();
		stack.pop();
		temp = temp->next;
	}

	temp->next = nullptr;

	return head;
}

//-------------------------- functions prepared for you

/*
 * Helper class for creating/printing a list from an array.
 */
template <class T>
class ListHelper
{
public:
	// build a list based on array input
	static node<T> *newList(T *arr, int n)
	{

		node<T> dummy = {(T)NULL, (T)NULL};
		node<T> *cur = &dummy;
		for (int i = 0; i < n; i++)
		{
			cur->next = new node<T>({arr[i], NULL});
			cur = cur->next;
		}
		return dummy.next; // without dummy header
	}

	//print nodes in a given linked list
	static void printList(node<T> *list)
	{
		while (list != NULL)
		{
			cout << list->data << "-> ";
			list = list->next;
		}
		cout << "NULL" << endl;
	}

	//delete nodes in a given linked list
	static void deleteList(node<T> *list)
	{
		node<T> *temp;
		while (list != NULL)
		{
			temp = list;
			list = list->next;
			delete temp;
		}
	}
};

/*
 * Driver program
 *
 * Read the test cases from the input file and use them to test
 * your functions' implementation.
 *
 */
int main(int argc, char **argv)
{

	ifstream fin("tut06_input.txt");
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

		node<int> *list = ListHelper<int>::newList(arr, n);

		cout << "Case " << i + 1 << endl;
		cout << "Input:\t\t";
		ListHelper<int>::printList(list);

		cout << "Reversed:\t";
		list = reverseList(list);
		ListHelper<int>::printList(list);

		cout << endl;

		ListHelper<int>::deleteList(list);
		delete[] arr;
	}

	return 0;
}
