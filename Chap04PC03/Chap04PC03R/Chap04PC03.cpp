/*3. Magic Dates
The date June 10, 1960, is special because when we write it in the following format,
the month times the day equals the year.
6/10/60
Write a program that asks the user to enter a month (in numeric form), a day, and a two- digit year. 
The program should then determine whether the month times the day is equal to the year. 
If so, it should display a message saying the date is magic. 
Otherwise, it should display a message saying the date is not magic.
*/

#include<iostream>
using namespace std;

int main ()
{
	int Day, Month, Year, Product;

	cout << " Welcome!!! Please think of a valid date." << endl;
	
	
	cout << " Please  enter the day of the date in your mind." << endl;
	cin >> Day;
	if ( Day < 0 || Day > 31)
	{
		cout << " The day you entered is not valid." << endl;
	}
	
	
	cout << " Now, please enter the month in numerical form." << endl;
	cin >> Month;
	if ( Month < 0 || Month > 12 )
	{
		cout << " The month you entered is not valid." << endl;
	}
	
	
	cout << " Now, please enter the last two digits of the year in numerical form." << endl;
	cin >> Year;
	if ( Year < 0 || Year > 100 )
	{
		cout << " Please enter only the last two digits of the year." << endl;
	}
	
	
	Product = Month * Day;

	cout << "The date "<< Day<< "/" << Month << "/" << Year <<" is" <<(Day*Month == Year ? " magic": " not magic") << endl << endl;
	
	system("PAUSE");
	return 0;
}
