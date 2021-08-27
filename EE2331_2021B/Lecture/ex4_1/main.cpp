#include "linkedListType.h"
#include <fstream>
#include <iostream>

using namespace std;

int main()
{
	linkedListType<int> list;
	ifstream inFile("testData.txt");

	if (!inFile.is_open())
	{
		cout << "Error: cannot open data file" << endl;
		exit(0); //terminate the program
	}

	while (!inFile.eof())
	{ //not end of file
		int i;
		inFile >> i; //read in an integer

		if (!inFile.fail())
			list.insert(i); //insert into the linked list
		else
			break;
	}

	inFile.close();

	cout << "Contents of the list: ";
	list.print();

	//codes to compute the sum of the numbers in the list
	linkedListIterator<int> iter = list.begin();
	linkedListIterator<int> eol = list.end(); //end of list

	int sum = 0;
	while (iter != eol)
	{
		sum += *iter; //get the data value via the iterator
		++iter;		  //advance the iterator to the next item
	}

	cout << "Sum of the list = " << sum << endl;
}
