/*
7. Time Calculator
Write a program that asks the user to enter a number of seconds.
• There are 86400 seconds in a day. If the number of seconds entered by the user is greater than or equal to 86400, 
the program should display the number of days in that many seconds.
• There are 3600 seconds in an hour. If the number of seconds entered by the user is less than 86400, 
but is greater than or equal to 3600, the program should display the number of hours in that many seconds.
• There are 60 seconds in a minute. If the number of seconds entered by the user is less than 3600, 
but is greater than or equal to 60, the program should display the number of minutes in that many seconds.
*/
#include<iostream>
#include<cmath>
#include<iomanip>
using namespace std;

int main ()
{
	int SecondsEntered;
	double Days, Hours, Minutes;

	cout << "Please enter the number of seconds." << endl;
	cin >> SecondsEntered;

	if ( SecondsEntered > 86400 )
	{
		Days = SecondsEntered / 86400;
		cout <<setprecision(5) << fixed << Days << " Days " << endl;
	}

	else if ( SecondsEntered > 3600 && SecondsEntered < 86400 ) 
	{
		Hours = SecondsEntered / 3600;
		cout << setprecision(5) << fixed << Hours << " Hours " << endl;
	}

	
	else if ( SecondsEntered > 60 && SecondsEntered < 3600 ) 
	{
		Minutes = SecondsEntered / 3600;
		cout << setprecision(5) << fixed << Minutes << " Minutes " << endl;
	}

	else 
	{ 
		cout << SecondsEntered << " Seconds " << endl;
	}

	system("PAUSE");
	return 0;
}