// Stock Commission
#include<iostream>
using namespace std;

int main ()
{
	int NumStock, Price, ActualCost;
	double Commission, Total;

	// Initializing Variables.
	NumStock = 750;
	Price = 35;

	// Calculations
	ActualCost = NumStock * Price;
	Commission = ActualCost * 0.02;
	Total = ActualCost + Commission ;

	// Displaying the output.
	cout << " The Actual Cost is $ " << ActualCost << endl;
	cout << " The Commission is $ " << Commission << endl;
	cout << " The Total Cost is $ " << Total << endl;

	system("PAUSE");
	return 0;
}