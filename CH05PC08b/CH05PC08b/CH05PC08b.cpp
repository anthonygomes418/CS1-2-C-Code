/* Anthony Gomes
   Student ID 234726
   To : Mr Benjamin Garlington
   Computer Science 1 Assignment
   Chapter 05 Programming Challenge #8
   04/10/2015
*/

// This program  displays a menu and asks the user to make a selction.
#include<iostream>
#include<iomanip>
#include<cmath>
#include<cstdlib>
using namespace std;

int main()
{
	// Constants
	const int MIN_VALUE = 1;
	const int MAX_VALUE = 6;

	// Variables
	int num1, num2;

	cout << "Rolling the dice......\n";
	num1 = (rand() % (MAX_VALUE - MIN_VALUE + 1)) + MIN_VALUE;
	num2 = (rand() % (MAX_VALUE - MIN_VALUE + 1)) + MIN_VALUE;
	
	cout << num1 << endl;
	cout << num2 << endl;

	system("PAUSE");
	return 0;
}