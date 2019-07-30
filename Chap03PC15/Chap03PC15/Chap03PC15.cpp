#include<iostream>
#include<iomanip>
using namespace std;

int main ()
{
	double ActualValue, AssessedValue, PropertyTax;

	cout << "Please enter the actual value of the property." << endl;
	cin >> ActualValue;
	
	AssessedValue = ActualValue * 0.60;
	
	PropertyTax = (AssessedValue/100) * 0.75;

	cout << "The Assessed Value of the property is $ " << setprecision(2) << fixed << AssessedValue << endl;
	cout << "The Property Tax is $" << setprecision(2) << fixed << PropertyTax << endl;

	system("PAUSE");
	return 0;
}