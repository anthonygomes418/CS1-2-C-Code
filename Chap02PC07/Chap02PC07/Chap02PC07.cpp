// Ocean Levels.
#include<iostream>
#include<cmath>
using namespace std;

int main ()
{
	// Creating variables.
	float Rate, Year5, Year7, Year10;

	// Initializing the Variables.
	Rate = 1.5;

	// Calculations.
	Year5 = 5*1.5;
	cout << "After five years, the height of the sea level  will increase by " << Year5 << "mm" <<endl << endl;

	Year7 = 7*1.5;
	cout << "After seven years, the height of the sea level will increase by " << Year7 << "mm" << endl << endl;

	Year10 = 10*1.5;
	cout <<"After ten years, the height of the sea level will increase by " << Year10 << "mm" << endl << endl;

	system("PAUSE");
	return 0;
}