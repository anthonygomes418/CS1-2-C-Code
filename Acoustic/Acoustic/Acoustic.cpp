/*

Name    : ANTHONY GOMES
UAPB ID : 234727
DATE    : 07/12/2015

INSTRUCTIONS:

You’ve gone to work for a consulting firm that specializes in converting existing rooms into recording studio. 
They have asked you to write a program that inputs a set of loudness measurements for a room and prints out basic statistics.
The measurements are made by a playing a series of 12 different tones, and recording the reading from a sound level meter onto a file.
The meter reading range from 50 to 126 decibels(a measure of loudness). Your program, however, is to output the measurements relative to the first tone—that is,
to show how much each individual reading differs from the first. After all the data have been read, the program is to print out the highest and lowest reading.

INPUT Twelve real number, representing the meter reading, on file “acoustic.dat”
OUTPUT The 12 input values (each print) and their values relative to the first reading. 
At the end of the program, the actual value, relative value, and sequence number of both the highest reading and the lowest.

*/
#include <iostream>
#include <fstream>
#include <iomanip>
#include<cmath>


using namespace std;

int main () 
{
  // Declare variables
	double BASEVALUE;			             // First reading from the .dat file
	double CURRENT;				             // Input during each iteration
	double RELATIVE;				         // Current minus base value
	double HIGH;					         // Highest value input
	double HIGHER;			                 // High minus base value
	double LOW;					             // Lowest value input
	double LOWER;			                 // Low minus base value
	int UPPERNUMBER;				         // Sequence number of high
	int LOWERNUMBER;				         // Sequence number of low
	int NUMBER;			                     // Sequence number of current reading
		
		// Declare and open input file
	ifstream inFile;					    // Input .dat file to read
	inFile.open("acoustic.dat");
		if ( !inFile )						// Did input file open correctly?
		{	// no
		cout << "Can't open input file." << endl;
		return 1;						     // Terminate program
		}

	   // Initialize variables and output
		NUMBER = 1;
		RELATIVE = 0.0;
		cout << setw(5) << "Reading Number" << setw(5) << "Actual Reading" << setw(5) << "Relative Reading" << endl;
		inFile >> BASEVALUE;			      // Input base value

		//Write first line of output
     	cout << fixed << showpoint << setprecision(3) << setw(5) << NUMBER << setw(5) << BASEVALUE << setw(5) << RELATIVE << endl;
	
		// Initializing the required variables
		HIGH = 89.60;
		UPPERNUMBER = 6;
		HIGHER = 3.60;
		LOW = 73.50;
		LOWERNUMBER = 12;
		LOWER  = -12.50;
		NUMBER = 2;					           // Initializing the loop ending

	while (NUMBER <= 12)
	{
		inFile >> CURRENT;				       // Input new reading
		RELATIVE = CURRENT - BASEVALUE;        // Calculate new relative
		cout << setw(5) << NUMBER << setw(5) << CURRENT << setw(5) << RELATIVE << endl;

		if (CURRENT > HIGH)					   // Check for new high
	{
		HIGH = CURRENT;
		UPPERNUMBER = NUMBER;
		HIGHER = RELATIVE;
	}

	     if (CURRENT < LOW)					    // Check for new low
	{
		LOW = CURRENT;
		LOWERNUMBER = NUMBER;
		LOWER = RELATIVE;
	
	}
	
		 NUMBER++;					            // Increment reading number

	}

	// Printing comparative readings
	cout << endl;
	cout << "Highest reading number is " << UPPERNUMBER << endl;
	cout << "Highest reading is " << HIGH << endl;
	cout << "Highest relative value is " << HIGHER << endl;
	cout << endl;
	cout << "Lowest reading number is " << LOWERNUMBER << endl;
	cout << "Lowest reading is " << LOW << endl;
	cout << "Lowest relative value is " << LOWER << endl;

	// Closing the file
	inFile.close();

	return 0;
	system("PAUSE");
}

