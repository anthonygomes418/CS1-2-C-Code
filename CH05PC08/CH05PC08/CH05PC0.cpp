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
using namespace std;

int main()
{
	int UserInput1, UserInput2, Answer; // Variables to store user's input and answers.
	short UserSelection; // Variable to store user's choice.
	
	// Constants for the menu.
	char Addition       = 1,
		 Subtraction    = 2,
		 Multiplication = 3,
		 Division       = 4,
		 Exit           = 5;
	
	// Display a menu to get user's input.
	cout << " Please enter an integer" << endl<<endl;
	cin >> UserInput1;
	cout << "Please enter another integer" << endl<<endl;
	cin >> UserInput2;

	// Display the menu to the user.
	cout << "The Objective of the calculation\n\n\n"
		 << "1. Addition\n"
		 << "2. Subtraction\n"
		 << "3. Multiplication\n"
		 << "4. Division\n"
		 << "5. Exit\n\n"
		 << " Please enter your choice by entering the appropriate number.";
	cin >> UserSelection;
	
	// The calculation.
	
	if ( UserSelection = 1)
	{
		Answer = UserInput1 + UserInput2;
		cout << Answer<< endl;
	}

	else if (UserSelection = 2)
	{
		Answer = UserInput1 - UserInput2;
		cout << Answer<<endl;
	}

	else if (UserSelection = 3)
	{
		Answer = UserInput1*UserInput2;
		cout << Answer<<endl;
	}

	else if (UserSelection = 4)
	{
		Answer = UserInput1/UserInput2;
		cout << Answer <<endl;
	}

	else if (UserSelection = 5)
	{
		cout << "Error"<<endl;
	}

	else 
	{
		cout << "The valid choices are 1 to 5. Please rerun the program."<<endl;
	}
	system("PAUSE");
	return 0;
}