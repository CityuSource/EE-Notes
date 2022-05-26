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

#include <cstdio>
#include <cstdlib>
#include <fstream>
#include <iostream>
#include <queue>

using namespace std;

/* Linked list node */
struct node
{
	int info;
	node *link;
};

node *merge(node *list1, node *list2);

// ************************ DO NOT MODIFY THE CODE ABOVE *************************

//-------------------------- functions to be implemented by you --------------------------

/*
 * The function applies merge sort algorithm to sort the input linked list.
 * It returns a pointer pointing to the head of the sorted list.
 * You are required to implement this function using an iterative approach (non-recursive).
 * You can use a queue to store the divided sublists for further merging. You can also use
 * the merge() function provided in the template.
 */
node *mergesort(node *list)
{
	if (!list || !list->link)
		return list;

	node *prev = nullptr, *slow = list, *fast = list;

	while (fast->link != nullptr)
	{
		fast = fast->link;
		if (fast->link != nullptr)
		{
			prev = slow;
			fast = fast->link;
			slow = slow->link;
		}
	}
	prev->link = nullptr;

	auto res = merge(slow, fast);

	return res;
}

// ************************ DO NOT MODIFY THE CODE BELOW *************************

//-------------------------- functions prepared for you --------------------------

/*
 * The recursive function takes two lists, each of which is sorted in ascending order, and
 * recursively merges them into one list with ascending order. The head of the merged list is
 * returned.
 *
 */
node *merge(node *list1, node *list2)
{

	// base case
	if (list1 == NULL || list2 == NULL)
		return list1 ? list1 : list2;

	// recursive cases
	if (list1->info < list2->info)
	{
		list1->link = merge(list1->link, list2);
		return list1;
	}
	else
	{
		list2->link = merge(list1, list2->link);
		return list2;
	}
}

/*
 * Helper class for creating/printing a list from an array.
 */
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
			cur->link = new node({arr[i], NULL});
			cur = cur->link;
		}
		return dummy.link; // without dummy header
	}

	// print nodes in a given linked list
	static void printList(node *list)
	{
		while (list != NULL)
		{
			printf("[%d]-> ", list->info);
			list = list->link;
		}
		cout << "NULL" << endl;
	}

	// delete nodes in a given linked list
	static void deleteList(node *list)
	{
		node *temp;
		while (list != NULL)
		{
			temp = list;
			list = list->link;
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

	ifstream fin("exam01_input.txt");
	if (!fin)
	{
		cout << "Input file not found.";
		exit(1);
	}

	int testcase = 0;
	fin >> testcase;

	for (int i = 1; i <= testcase; i++)
	{

		int n1;
		fin >> n1;
		int *arr1 = new int[n1];
		for (int j = 0; j < n1; j++)
			fin >> arr1[j];

		cout << "Case " << i << endl;
		node *list1 = ListHelper::newList(arr1, n1);
		cout << "Input list:\t";
		ListHelper::printList(list1);
		cout << "Sorted list:\t";
		node *result = mergesort(list1);
		ListHelper::printList(result);
		cout << endl
			 << endl;

		ListHelper::deleteList(result);
	}

	return 0;
}
