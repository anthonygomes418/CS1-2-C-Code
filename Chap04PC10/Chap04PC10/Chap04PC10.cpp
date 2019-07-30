/*
Days in a Month
Write a program that asks the user to enter the month (letting the user enter an integer in the range of 1 through 12) and the year. 
The program should then display the number of days in that month.

Use the following criteria to identify leap years:
1. Determine whether the year is divisible by 100. If it is, then it is a leap year if and only if it is divisible by 400. 
For example, 2000 is a leap year but 2100 is not.

2. If the year is not divisible by 100, then it is a leap year if and if only it is divisible by 4. 
For example, 2008 is a leap year but 2009 is not.

Here is a sample run of the program:
Enter a month (1-12): 2 [Enter] Enter a year: 2008 [Enter]
29 days
*/

#include<iostream>
#include<string>
using namespace std;

int main ()
{
	int validate_entry;
	int YEAR = 0;
	int MONTH = 0;
	int DAY = 0;

	cout << " Welcome to the program" << endl;
	cout << " When prompted, please enter the year and the month that you would like informationn about" << endl;
	
	cout << " Please enter the month that you want information about, in numbers between 1 and 12" << endl;
	cin >> MONTH;

	cout <<" Thank you! Now enter the year that you have in mind" << endl;
	cin >> YEAR;

	if ( YEAR % 100 && YEAR % 400)
	{
		if ( MONTH == 4 || MONTH == 6 || MONTH == 9 || MONTH = 11)
		 DAY = 30;
		else if ( MONTH == 1 || MONTH == 3 || MONTH == 5 || MONTH = 7 || MONTH = 8 || MONTH = 10 || MONTH = 12)
		 DAY = 31;
		else
		 DAY = 29;
	
	}
		

	else if (YEAR % 4)
	{
		if ( MONTH == 4 || MONTH == 6 || MONTH == 9 || MONTH = 11)
		 DAY = 30;
		else if ( MONTH == 1 || MONTH == 3 || MONTH == 5 || MONTH = 7 || MONTH = 8 || MONTH = 10 || MONTH = 12)
		 DAY = 31;
		else
		 DAY = 29;
	}

	else
	{
		if ( MONTH == 4 || MONTH == 6 || MONTH == 9 || MONTH = 11)
		 DAY = 30;
		else if ( MONTH == 1 || MONTH == 3 || MONTH == 5 || MONTH = 7 || MONTH = 8 || MONTH = 10 || MONTH = 12)
		 DAY = 31;
		else
		 DAY = 29;
		
	}

	cout << DAY ;

	system("PAUSE");
	return 0;
	}