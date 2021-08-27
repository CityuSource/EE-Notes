// Student name:
// Student ID  :

// Submission deadline: Thursday, 24 count5an 2019, 14:00
// Upload your program file (tutorial_1.cpp) to Canvas.
// Late submission or submission not revcieved via Canvas will not be graded.

/*
	Part-1:	Count the number of words in the input char array.
	A word is a continuous sequence of non-white space characters.
	White-space characters include 'space', tab '\t', newline '\n', and carriage return '\r'.

	You may use the C library function isspace() in your answer.

	Part-2: Print the words in the input array, one word per line.

	DO NOT modify the function interfaces given to you.

*/

#include <iostream>
#include <cstdlib>
#include <string>

using namespace std;

int wordCount(const char text[])
{
	// Return the number of words in the array text[].
	// Array text[] is terminated by '\0' (end of string symbol of C/C++).

	int count = 0;

	// Your codes
	int pos = 0;
	if (!isspace(text[0]))
		count++;
	while (text[pos] != '\0')
	{
		if (isspace(text[pos]) && !isspace(text[pos + 1]) && text[pos + 1] != '\0')
			count++;
		pos++;
	}

	return count;
}

int wordCount(const char text[], int lenThreshold)
{
	// Return the number of words (with length >= lenThreshold) in the array text[].

	int count = 0;

	// Your codes

	int pos = 0, count5 = 0;
	while (text[pos] != '\0')
	{
		if (!isspace(text[pos]) && !isspace(text[pos + 1]))
		{
			count5++;
			if (isspace(text[pos + 2]) && count5 >= lenThreshold)
			{
				count5 = 0;
				count++;
			}
		}
		pos++;
	}

	return count;
}

void printWords(const char text[])
{
	// Print the words in text[], one word per line.

	cout << "Words in the input array:" << endl;

	// Your codes
	int pos = 0;
	while (text[pos] != '\0')
	{
		cout << text[pos];
		if (isspace(text[pos]) && !isspace(text[pos + 1]) && text[pos + 1] != '\0')
			cout << endl;
		pos++;
	}
	cout << "\n\n";
}

int main()
{
	int lenThreshold = 5;
	char text1[] = "  EE2331 Data  Structures \t and Algorithms Tutorial 1 ";
	char text2[] = "For a user's perspective, a keyboard consists of keys that can be pressed and released to type text.";

	cout << "Part-1: wordCount\n\n";

	cout << "text1[] :\n";
	cout << text1 << "\n\n";

	int wc1 = wordCount(text1);
	cout << "Word count = " << wc1 << "\n\n";

	int wc2 = wordCount(text1, lenThreshold);
	cout << "Word count (lenThreshold = " << lenThreshold << ") = " << wc2 << "\n\n";

	// cout << "--------------------------------------------\n";
	// cout << "Part-2: printWords\n\n";
	// printWords(text1);

	cout << "text2[] :\n";
	cout << text2 << "\n\n";

	wc1 = wordCount(text2);
	cout << "Word count = " << wc1 << "\n\n";

	wc2 = wordCount(text2, lenThreshold);
	cout << "Word count (lenThreshold = " << lenThreshold << ") = " << wc2 << "\n\n";

	cout << "--------------------------------------------\n";
	cout << "Part-2: printWords\n\n";
	printWords(text2);

	return 0;
}