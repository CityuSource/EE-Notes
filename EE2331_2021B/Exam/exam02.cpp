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
 * Student Name: Leung Chun Wai
 * Student ID: 56046680
 *
 */

#include <cstdio>
#include <cstdlib>
#include <fstream>
#include <iostream>

using namespace std;

/* Linked list node */
template <class T>
struct node
{
	T info;
	node<T> *link;
};

/* FIFO queue implemented using circular linked list */
template <class T>
class MyQueue
{

private:
	node<T> *last; // always pointing to the last node of the internal circular linked list

public:
	MyQueue() { last = NULL; } // default constructor, initialized to empty (NULL)

	bool empty() const
	{
		return (last == NULL);
	}

	// precondition: the queue is not empty
	T &front() const
	{
		return last->link->info;
	}

	void push(const T &item); // insert item at the end of queue
	void pop();				  // remove front item from the queue
};

// ************************ DO NOT MODIFY THE CODE ABOVE *************************

//-------------------------- functions to be implemented by you --------------------------

template <class T>
void MyQueue<T>::push(const T &item)
{
	node<T> *temp = new node<T>({item, nullptr});

	if (empty())
	{
		last = temp;
		last->link = last;
	}
	else
	{
		temp->link = last->link;
		last->link = temp;
		last = temp;
	}
}

template <class T>
void MyQueue<T>::pop()
{
	if (!empty())
	{
		if (last->link == last)
			last = nullptr;

		else
		{
			node<T> *temp = last->link;
			last->link = last->link->link;
			delete temp;
		}
	}
}

// ************************ DO NOT MODIFY THE CODE BELOW *************************

//-------------------------- functions prepared for you --------------------------

/*
 * Driver program
 *
 */
int main(int argc, char **argv)
{

	MyQueue<int> q;

	// // add 10 numbers to queue
	// for (int i = 1; i <= 10; i++)
	// 	q.push(i);

	int arr[15] = {2, 4, 6, 8, 10, 12, 80, 16, 18, 90, 22, 24, 26, 28, 30};
	for (auto i : arr)
		q.push(i);

	cout << "Queue is empty? " << (q.empty() ? "YES" : "NO") << endl;

	cout << "Queue contains: ";
	while (!q.empty())
	{
		cout << q.front() << " ";
		q.pop();
	}
	cout << endl;

	cout << "Queue is empty? " << (q.empty() ? "YES" : "NO") << endl;

	return 0;
}

/*******************************************************
Expected Output:


Queue is empty? NO
Queue contains: 1 2 3 4 5 6 7 8 9 10
Queue is empty? YES


********************************************************/
