// This program gets the average of five numbers.
#include<iostream>
#include<cmath>
using namespace std;

int main()
{
	// Creating variables to store the 5 numbers.
	int num1, num2, num3, num4, num5, sum;
	double average;

	// Providing input for the variables.
	num1 = 28;
	num2 = 32;
	num3 = 37;
	num4 = 24;
	num5 = 33;

	// Displaying the numbers to the user.
	cout << "First number  : "  << num1 << endl;
	cout << "Second number : " << num2 << endl;
	cout << "Third number  : "  << num3 << endl;
	cout << "Forth number  : "  << num4 << endl;
	cout << "Fifth number  : "  << num5 << endl << endl;

	// Getting the total.
	sum = num1 + num2 + num3 + num4 + num5;
	cout << "The total is   : " << sum << endl;

	// Getting the average.
	average = sum/5;
	cout << "The average is : " << average << endl << endl;
	system ("PAUSE");
	return 0;
}