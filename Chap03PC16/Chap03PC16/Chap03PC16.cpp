#include<iostream>
#include<iomanip>
using namespace std;

int main ()
{
	double ActualValue, AssessedValue, ConsiderableValue, PropertyTax, QuarterlyPayment;

	cout << "Please enter the actual value of your property."<< endl;
	cin >> ActualValue;
	
	AssessedValue = ActualValue*0.60;
	ConsiderableValue = AssessedValue - 5000;

	PropertyTax = (ConsiderableValue/100) * 2.64;
	QuarterlyPayment = PropertyTax/ 4;

	cout << " The property tax is $ " << setprecision(2) << fixed << PropertyTax << endl;
	cout << " The quarterly payment for tax is $ " << setprecision(2) << fixed << QuarterlyPayment << endl;

	system("PAUSE");
	return 0;
}