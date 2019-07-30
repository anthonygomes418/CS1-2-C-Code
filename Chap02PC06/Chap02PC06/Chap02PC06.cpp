// This program will calculate an employee's total pay for a year.
#include<iostream>
#include<cmath>
using namespace std;

int main ()
{
	// Declaring the variables.
	float payAmount, annualPay;
	int payPeriods;

	// Initializing the variables.
	payAmount  = 2200.00;
	payPeriods = 26 ;

	// Calculating total payment.
	annualPay = payAmount*payPeriods;
	cout << "Your total payment is $ " << annualPay << endl;
	system("PAUSE");
	return 0;
}