#include<iostream>
#include<iomanip>
#include<string>
using namespace std;

int main ()
{
	// Creating Variables.
	double Month1, Month2, Month3, Total, Average;
	string Name1, Name2, Name3;

	// Asking the User for Input.
	cout << "Please enter the first month " << endl;
	cin >> Name1;
	cout << "Please enter the amount of rainfall for the first month " << endl;
	cin >> Month1;
	cout << "Please enter the second month " << endl;
	cin >> Name2;
	cout << "Please enter the amount of rainfall for the second month " << endl;
	cin >> Month2;
	cout << "Please enter the third month " << endl;
	cin >> Name3;
	cout << "Please enter the amount of rainfall for the third month " << endl;
	cin >> Month3;

	// Calculations.
	Total = Month1 + Month2 + Month3;
	Average = Total / 3 ;

	// Displaying the output.
	cout << " The average rainfall for the months of " << Name1 <<","<< "," << Name2 << "and" << Name3 ;
	cout << " was " << setprecision(2) << fixed << Average << "inches " << endl ;

	system("PAUSE");
	return 0 ;
}