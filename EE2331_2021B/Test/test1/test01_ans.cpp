/*
 * 
 * Instructions:
 * 
 * 1. Only complete the functions specified below. 
 *    - Do not create any additional function.
 *    - Do not include any additional header or library.
 * 2. Use Visual Studio 2019 to build, test and run your code.
 * 3. Write down your full name and student ID below.
 * 
 * Student Name:
 * Student ID:
 *
 */

#include <cstdlib>
#include <cstring>
#include <fstream>
#include <iostream>

#define MAX_LENGTH 1000 // the max allowed input length

using namespace std;

/* Linked list node */
struct node
{
	int data;
	node *next;
};

// ************************ DO NOT MODIFY THE CODE ABOVE *************************

//-------------------------- functions to be implemented by you --------------------------

/*
 * Given a linked list representing a non-negative integer in reverse order, find the next greater number that has same set of digits.
 * 
 * - The function cannot create additional nodes.
 * - The function cannot modify any node's data.
 * - The function generates the next greater number by reordering the nodes.
 * - The function returns the next greater number as a linked list in reverse order.
 * - The function returns the same number if there is no next greater number possible.
 *
 * Precondition: the input list 'number' is non-empty
 *
 * Time Complexity Requirement: O(n)
 * Space Complexity Requirement: O(1)
 * 
 * Example:
 * Given number	(1234 in reverse order):			[4]-> [3]-> [2]-> [1]-> NULL
 * Next greater number (1243 in reverse order):		[3]-> [4]-> [2]-> [1]-> NULL
 *
 */
node *nextGreaterNumber(node *number)
{
	node *head = number;

	// 1) Start from the LSD and find the first digit (node S) that is smaller than its previous digit.
	node *prevS = head;
	node *curS = prevS->next;
	while (curS != NULL && curS->data >= prevS->data)
	{ // note that the comparator should be >=
		prevS = curS;
		curS = curS->next;
	}

	// If no such digit is found, then all digits are in descending order, i.e. no greater number possible.
	if (curS == NULL)
		return number;

	// 2) Find the smallest digit (node G) preceding and greater than node S.
	node *prevG = NULL;
	node *curG = head;
	while (curG->data <= curS->data)
	{ // note that the comparator should be <=
		prevG = curG;
		curG = curG->next;
	}

	// 3) Swap node G and node S

	// 3a) Swap the next pointers of their previous nodes
	// node S is not a head node and hence prevS must not be NULL
	prevS->next = curG;
	// check if node G is the head node
	if (prevG != NULL)
		prevG->next = curS;
	else
		head = curS;

	// 3b) Swap the next pointers of node G and node S
	node *temp = curS->next;
	curS->next = curG->next;
	curG->next = temp;

	// 4) Reserve the digits preceding node G
	node *prev = curG; // initialize to curG because the head node's next will point to curG after flipping
	node *cur = head;
	node *next = NULL;
	while (cur != curG)
	{
		next = cur->next; // save the next node
		cur->next = prev; // flip the next pointer
		prev = cur;		  // move forward: prev jumps to cur
		cur = next;		  // move forward: cur jumps to next (i.e. cur->next)
	}

	return prev; // the new head, the previous of node G
}

// ************************ DO NOT MODIFY THE CODE BELOW *************************

//-------------------------- functions prepared for you --------------------------

/*
 * Given a non-negative integer as a c-string (number), build a linked list that each node stores one digit of
 * the number starting from the least significant digit (LSD).
 *
 * The function returns a pointer to the head node (LSD) of the list.
 *
 * Precondition: number of digits > 0
 *
 */
node *buildReverseList(char *number)
{

	node *head = NULL, *cur = NULL;
	int i = 0;
	while (number[i] != '\0')
	{
		cur = new node({number[i++] - '0', head});
		head = cur;
	}

	return head;
}

/*
 * Helper functions for linked list.
 */
class ListHelper
{
public:
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

/*
 * Driver program
 *
 * Read the test cases from the input file and use them to test
 * your implementation.
 *
 */
int main()
{

	char number[MAX_LENGTH]; // buffer

	ifstream fin("test01_input.txt");
	if (!fin)
	{
		cout << "Input file not found.";
		exit(1);
	}

	int testcase;
	fin >> testcase;

	for (int i = 0; i < testcase; i++)
	{

		cout << "Case " << i + 1 << endl;

		fin >> number;
		node *input = buildReverseList(number);

		cout << "Input:\t";
		ListHelper::printList(input);
		cout << "Output:\t";
		node *output = nextGreaterNumber(input);
		ListHelper::printList(output);
		cout << endl;

		ListHelper::deleteList(output);
	}

	return 0;
}
