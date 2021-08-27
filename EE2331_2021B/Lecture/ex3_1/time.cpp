//****************************************
// IMPLEMENTATION FILE (time.cpp)
// this file implements the Time member functions
//****************************************

#include "time.h"
#include <iostream>

using namespace std;
//****************************************

// Precondition:
// 0 <= hours <= 23 && 0 <= minutes <= 59 && 0 <= seconds <= 59
// Postcondition:
// time is set according to the incoming parameters
// NOTE: This function MUST be called prior to any of the other member functions
void Time::set(int hours, int minutes, int  seconds) {
	hrs = hours;
	mins = minutes;
	secs = seconds;
}


// Precondition:
// The set function has been invoked at least once
// Postcondition:
// time has been advanced by one second, with 23:59:59 wrapping around to 0:0:0
void Time::increment() {
	secs++;
	if (secs > 59) {
		secs = 0;
		mins++;
		if (mins >59) {
			mins = 0;
			hrs++;
			if (hrs >23)
				hrs = 0;
		}
	}
}

// Precondition:
// The set function has been invoked at least once
// Postcondition:
// Time has been output in the form HH:MM:SS
void Time::write () const {
	if ( hrs < 10 )
		cout << '0';
	cout << hrs << ':';
	if ( mins < 10 )
		cout << '0';
	cout << mins <<':';
	if ( secs < 10 )
		cout << '0';
	cout << secs;
}

// Precondition:
// The set function has been invoked at least once for both this time and otherTime
// Postcondition:
// Function value == TRUE, if this time equals otherTime, otherwise Function value == FALSE
bool Time::equal (Time otherTime) const {
	return (hrs == otherTime.hrs && mins == otherTime.mins && secs == otherTime.secs);
}

// Precondition:
// The set function has been invoked at least once for both this time and
// otherTime && This time and otherTime represent times in the same day
// Postcondition:
// Function value == TRUE, if this time is earlier in the day than otherTime,
// otherwise Function value == FALSE
bool Time::lessThan (Time otherTime) const {
	return (	hrs < otherTime.hrs ||
	            hrs == otherTime.hrs && mins < otherTime.mins ||
	            hrs == otherTime.hrs && mins == otherTime.mins && secs < otherTime.secs);
}

//**************************************** main function *************************************

int main () {
	Time time1, time2;
	int	inputHrs, inputMins, inputSecs;

	time1.set(5, 20, 0);

	cout << "Enter hours, minutes, seconds: ";
	cin >> inputHrs >> inputMins >> inputSecs;

	time2.set(inputHrs, inputMins, inputSecs);

	cout << "time1: ";
	time1.write();
	cout << endl;
	
	cout << "time2: ";
	time2.write();
	cout << endl;

	if (time1.lessThan(time2)) 
		cout << "time1 is earlier than time2" << endl;
	else
		cout << "time1 is NOT earlier than time2" << endl;

	time2 = time1;		// member-by-member assignment
	cout << "time2 changes to: ";
	time2.write();

	system("pause");
	return 0;
}

