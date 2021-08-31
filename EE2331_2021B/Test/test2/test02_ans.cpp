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
 * Student Name:
 * Student ID:
 *
 */

#include <cstdio>
#include <cstdlib>
#include <fstream>
#include <iostream>
#include <stack>
#include <string>

using namespace std;

// ************************ DO NOT MODIFY THE CODE ABOVE *************************

//-------------------------- functions to be implemented by you --------------------------

/*
 * This function compares the precedence of two operators and returns true if op1 has a higher
 * precedence than op2. Otherwise it returns false.
 *
 * Precondition: 
 * - operators are limited to +, -, * and / only
 * 
 */
bool hasHigherPrecedence(char op1, char op2)
{
	if (op1 == '+' || op1 == '-')
		return false;
	else if (op2 == '+' || op2 == '-')
		return true;
	else
		return false;
}

/*
 * This function converts an infix expression to a postfix expression, where both are represented
 * as a C++ string object. It returns the postfix string.
 *
 * Precondition:
 * - an operand is represented by a single character
 * - the infix expression may contain these six operators: +, -, *, /, ( and )
 */
string infix2postfix(string infix)
{

	stack<char> buffer;
	string postfix;

	for (int i = 0; i < infix.length(); i++)
	{
		char c = infix[i];
		if (c == '+' || c == '-' || c == '*' || c == '/')
		{
			while (!buffer.empty() && buffer.top() != '(' && !hasHigherPrecedence(c, buffer.top()))
			{
				postfix.append(1, buffer.top());
				buffer.pop();
			}
			buffer.push(c);
		}
		else if (c == '(')
		{
			buffer.push(c);
		}
		else if (c == ')')
		{
			while (!buffer.empty() && buffer.top() != '(')
			{
				postfix.append(1, buffer.top());
				buffer.pop();
			}
			buffer.pop(); // remove ( from stack
		}
		else
		{
			postfix.append(1, c);
		}
	}

	while (!buffer.empty())
	{
		postfix.append(1, buffer.top());
		buffer.pop();
	}

	return postfix;
}

// ************************ DO NOT MODIFY THE CODE BELOW *************************

//-------------------------- functions prepared for you --------------------------

/*
 * Driver program
 *
 * Read the test cases from the input file and use them to test
 * your implementation.
 *
 */
int main(int argc, char **argv)
{

	ifstream fin("test02_input.txt");
	if (!fin)
	{
		cout << "Input file not found." << endl;
		exit(1);
	}

	int testcase = 0;
	fin >> testcase;

	string infix;
	for (int i = 1; i <= testcase; i++)
	{

		fin >> infix;
		cout << "Case " << i << endl;
		cout << "Infix:\t\t" << infix << endl;
		cout << "Postfix:\t" << infix2postfix(infix) << endl;
		cout << endl;
	}

	return 0;
}
