/* Anthony Gomes
   Student ID 234726
   To : Mr Benjamin Garlington
   Computer Science II Assignment
   Chapter 03 Programming Challenge #19
*/


// Setting up the preprocessors

#include<iostream>
#include<iomanip>
#include<string>
#include<cmath>
using namespace std;

int main()
{
	// Creating the variables to hold data.
	int Rate, No;
	double Loan, Top, Bottom, MonthRate, Month1, Payment, InterestPaid, AmountPaid ;

	// Prompting the user to provide the necessary information.

	cout << "Welcome to the Program"<< endl;
	cout << "Please enter the amount of the loan"<< endl;
	cin >> Loan;
	cout << "Please enter the number of payments"<< endl;
	cin >> No;
	cout << "Please enter the annual interest rate" << endl;
	cin >> Rate;
	

	// Calculations necessary for the program

	MonthRate =  Rate/12;

	Month1 = (1 + MonthRate) ;

	Top = Rate * (pow(Month1, No));

	Bottom = (pow(Month1, No)) -1;

	Payment = (Top/Bottom)*Loan;

	AmountPaid = No * Payment;

	InterestPaid = AmountPaid- Loan;



	// Printing the result to the user
	cout << " Loan Amount           : " << "$" << Loan  << endl;
	cout << " Monthly Interest Rate : " << MonthRate << " %" << endl;
	cout << " Number of Payments    : " << setprecision(2)<< fixed << setw(2) <<  No << endl;
	cout << " Monthly Payment       : " << setprecision(2)<< fixed <<"$" << Payment << endl;
	cout << " Amount Paid Back      : " << setprecision(2)<< fixed << "$" << AmountPaid << endl;
	cout << " Interest paid         : " << setprecision(2)<< fixed << "$" << InterestPaid << endl;
	

	system("PAUSE");
	return 0;
}