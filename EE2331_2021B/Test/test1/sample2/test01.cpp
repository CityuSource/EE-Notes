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
 * Student Name: Suwandi Ryan Loe
 * Student ID: 55724681
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
	if (!number || !number->next) // Null check
		return number;

	node *temp = number, *head = number, *answer = NULL; // All variable initializations
	int length = 1, smol1 = INT_MAX, smol2 = INT_MAX, pos = 0;

	while (temp->next) // Count the amount of digits
	{
		temp = temp->next;
		length++;
	}

	for (temp = head; head; head = head->next, pos++) // Look for the smallest digit
	{
		temp = head->next;
		if (smol1 > head->data)
		{
			smol1 = head->data;
			answer = head;
			break;
		}
	}

	head = number;

	for (int j = temp->data; head; head = head->next) // Look for next smaller digit
	{
		if (head->data < smol1 && smol1 > j)
		{
			smol2 = head->data;
			temp = head;
		}
	}

	swap(*temp, *answer);
	swap(temp->next, answer->next);

	return answer;
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
