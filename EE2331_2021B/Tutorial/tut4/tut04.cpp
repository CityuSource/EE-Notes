/*
 * Instructions:
 * 
 * 1. Only complete the functions specified below. Do not create any additional function.
 * 2. Use Visual Studio 2019 to build, test and run your code.
 * 3. Do not include any additional header or library.
 * 4. This is an exercise of linked list operations. Do not copy linked lists to arrays for manipulation.
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

//-------------------------- functions to be implemented by you

/*
 * Given a non-negative integer as a c-string (number), build a linked list that each node stores one digit of 
 * the number starting from the least significant digit.
 * 
 * The function returns a pointer to the head node (LSD) of the list.
 *  
 * Precondition: number of digits > 0
 * 
 * Example:
 * Given number:	123
 * Output list:		[3]-> [2]-> [1]-> NULL
 * 
 */
node *buildReverseList(char *number)
{
	node *listhead = NULL;

	for (int i = 0; number[i] != '\0'; i++)
	{
		node *listtemp = new node({number[i] - 48, listhead});
		listhead = listtemp;
	}

	return listhead;
}

/*
 * Given two linked lists repsumresultenting two non-negative integers in reverse order, add the two integers and store 
 * the sum in a new linked list. 
 *
 * The function returns a linked list (in reverse order) of the sum.
 * 
 * Precondition: num1 and num2 are non-empty.
 * 
 * Post-condition: num1 and num2 are unaltered.
 * 
 * Space and Time Complexity Requirement: O(n)
 * 
 * Example:
 * Given number 1:	123
 * Given number 2:	456
 * Output list:		[9]-> [7]-> [5]-> NULL
 * 
 */
node *addNumbers(node *num1, node *num2)
{
	node *listhead = NULL, *listlast = NULL;
	int carry = 0;

	while (num1 != NULL || num2 != NULL)
	{
		int sum = carry;

		if (num1)
		{
			sum += num1->data;
			num1 = num1->next;
		}
		if (num2)
		{
			sum += num2->data;
			num2 = num2->next;
		}

		carry = (sum >= 10) ? 1 : 0;
		node *listtemp = new node({sum % 10, NULL});

		(listlast != NULL) ? listlast->next = listtemp : listhead = listtemp;
		listlast = listtemp;
	}

	if (carry > 0)
		listlast->next = new node({carry, NULL});

	return listhead;
}

//-------------------------- functions prepared for you

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
		node *sumtemp;
		while (list != NULL)
		{
			sumtemp = list;
			list = list->next;
			delete sumtemp;
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
int main()
{

	char number[MAX_LENGTH]; // buffer

	ifstream fin("tut04_input.txt");
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
		node *num1 = buildReverseList(number);
		fin >> number;
		node *num2 = buildReverseList(number);

		cout << "Num 1:\t";
		ListHelper::printList(num1);
		cout << "Num 2:\t";
		ListHelper::printList(num2);
		cout << "Sum:\t";
		node *sum = addNumbers(num1, num2);
		ListHelper::printList(sum);
		cout << endl;

		ListHelper::deleteList(num1);
		ListHelper::deleteList(num2);
		ListHelper::deleteList(sum);
	}

	return 0;
}
