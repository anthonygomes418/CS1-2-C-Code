/* Name : Anthony Priyo Gomes 
   Computer Science II
   Benjamin Garlington 
   Chapter 03  Programming Exercise 18
   09/04/2015
*/

#include<iostream>
#include<iomanip>
#include<cmath>
using namespace std;

int main ()
{
	// Creating Variables to hold data
	int CompoundTimes;
	float InterestRate, Principal, Interest, Savings, Power;

	// Prompting the user to put data about the Loan and Interest
	cout << "Please enter the principal amount."<< endl;
	cin >> Principal;
	cout << "Please enter the rate of interest." << endl;
	cin >> InterestRate;
	cout << "Please enter the number of times the interest is compounded." << endl;
	cin >> CompoundTimes;


	// Calculating the Interest
	Power = 1 + (InterestRate/CompoundTimes);

	Interest = Principal * pow(Power, CompoundTimes);

	Savings = Principal + Interest;

	// Printing the result to the user
	cout << " Interest Rate    : " << setw(9) << InterestRate << " %" << endl;
	cout << " Times Compounded : " << setw(9) << CompoundTimes << endl;
	cout << " Principal        : " << setprecision(2)<< fixed << setw(2) << "$" << Principal << endl;
	cout << " Interest         : " << setprecision(2)<< fixed <<"$" << Interest << endl;
	cout << " Amount in savings: " << setprecision(2)<< fixed << "$" << Savings << endl;

	system("PAUSE");
	return 0;
}