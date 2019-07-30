// Circuit Board Price.

#include<iostream>
using namespace std;

int main ()
{
	double percentileProfit, Cost, SalesPrice, Profit;

	// Initializing the variables.
	
	percentileProfit = 0.35;
	Cost = 14.59;

	// Calculations
	
	Profit = Cost * percentileProfit;
	SalesPrice = Cost + Profit;

	// Displaying outputs.

	cout << "The profit on the item is $ " << Profit << endl;
	cout << "The Sales price of the item is $ " << SalesPrice << endl;

	system("PAUSE");
	return 0;
}
