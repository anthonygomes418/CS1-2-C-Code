// Restaurant Bill.
// This program will calculate the tax, tip and total cost of a person's meal at a restaurant.
#include<iostream>
#include<cmath>
using namespace std;

int main ()
{
	// Creating Variables to store data.
	double MealCharge,Tax, Tip, TotalCost,TaxCharge, TipCharge;

	// Assigning constants of Tax Rates and Tip.
	Tax = 0.0675;
	Tip = 0.20;

	// Prompt the user for the meal charge.
	cout << "Please enter your meal charge." << endl;
	cin >> MealCharge;

	// Calculating the tip and tax.
	TaxCharge = MealCharge*Tax;
	TipCharge = MealCharge*Tip;

	// Calculate the total cost.
	TotalCost = MealCharge  + TaxCharge + TipCharge;

	// Display the charges.
	cout << "Your basic meal charge is $ " << MealCharge << endl;
	cout << "The tax charge of 6.75% is $ "  << TaxCharge << endl;
	cout << "The suggested tip of 20% is $ " << TipCharge << endl;
	cout << "The total cost is $ " << TotalCost << endl;

	system("PAUSE");
	return 0;
}
