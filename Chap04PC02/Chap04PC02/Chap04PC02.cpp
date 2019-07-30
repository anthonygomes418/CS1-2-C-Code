/*2. Roman Numeral Converter
Write a program that asks the user to enter a number within the range of 1 through 10. 
Use a switch statement to display the Roman numeral version of that number.

Input Validation: Do not accept a number less than 1 or greater than 10.
*/

#include<iostream>
#include<cmath>
#include<string>
using namespace std;

int main()
{
	// Creating variables
	int UserInput; // To store user's input
	string Output; // To display the user's desired output.
	int NumTranslate;

	cout << "Please enter a number between 1 and 10" << endl;
	cin >> UserInput;
	
	// Data Validation.
	if ( UserInput < 0 || UserInput > 10)
	    cout << "Please enter a number in the range between 1 and 10" << endl;

	switch( UserInput )
	{
  	       case 1 : cout << " I " << endl;
			          break;

		   case 2 : cout << " II " << endl;
			          break;
		   case 3 : cout << " III " << endl;
			          break;
		   case 4 : cout << " IV " << endl;
			          break;
		   case 5 : cout << " V " << endl;
			          break;
           case 6 : cout << " VI " << endl;
			          break;
		   case 7 : cout << " VII " << endl;
			          break;
		   case 8 : cout << " VIII " << endl;
			          break;
		   case 9 : cout << "  IX " << endl;
			          break;
		   case 10 : cout << " X " << endl;
			          break;
		   default   : cout << " You didnot answer the correct number. Please try again."<< endl;
	}
	
			   
    system("PAUSE");
	return 0;
	}