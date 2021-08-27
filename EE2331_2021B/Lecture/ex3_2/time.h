//****************************************
// SPECIFICATION FILE (time.h)
// This file gives the specification of a Time abstract data type
//****************************************

class Time {

	private:
		int hrs;
		int mins;
		int secs;

	public:

		// Precondition:
		// 0 <= hours <= 23 && 0 <= minutes <= 59 && 0 <= seconds <= 59
		// Postcondition:
		// time is set according to the incoming parameters
		// NOTE: This function MUST be called prior to any of the other member functions
		void set (int hours, int minutes, int seconds);


		// Precondition:
		// The set function has been invoked at least once
		// Postcondition:
		// time has been advanced by one second, with 23:59:59 wrapping around to 0:0:0
		void increment ();


		// Precondition:
		// The set function has been invoked at least once
		// Postcondition:
		// Time has been output in the form HH:MM:SS
		void write () const;


		// Precondition:
		// The set function has been invoked at least once for both this time and otherTime
		// Postcondition:
		// Function value == TRUE, if this time equals otherTime, otherwise Function value == FALSE
		bool equal (Time otherTime) const;


		// Precondition:
		// The set function has been invoked at least once for both this time and
		// otherTime && This time and otherTime represent times in the same day
		// Postcondition:
		// Function value == TRUE, if this time is earlier in the day than otherTime,
		// otherwise Function value == FALSE
		bool lessThan (Time otherTime) const;
		
		Time(int, int, int);		// Constructor
		Time();						// Constructor


};
