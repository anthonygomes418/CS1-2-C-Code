/* Anthony Gomes
   Student ID 234726
   To : Mr Benjamin Garlington
   Computer Science 1 Assignment
   Chapter 05 Programming Challenge #1
   04/01/2015
*/

// This program calculates the sum from any positive number enter to 0
#include <iostream>
#include <cmath>
#include <string>
using namespace std;

int main ()
{
	// Creating Variables for the summation.
	int UserInput, Total;

	// Asking for an input from the user for the calculation.
	cout << "Enter a positive number.";
	cin >> UserInput;

	//  Creating the loop to calculate the summation.
	while ( UserInput > 0)
	{ Total = Total + UserInput;
	  UserInput--;
	}
	cout << "The sum of the numbers is" << Total << endl;
	system ("PAUSE");
	return 0;
}