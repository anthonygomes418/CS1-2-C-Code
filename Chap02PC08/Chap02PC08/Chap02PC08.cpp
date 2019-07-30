// This program calculates the price of 5 items.
#include<iostream>
#include<cmath>
using namespace std;

int main()
{
	// Creating Variables
	
	double Item1, Item2, Item3, Item4, Item5;
	double Tax1, Tax2, Tax3, Tax4, Tax5;
	double SubTotal1, SubTotal2, SubTotal3, SubTotal4, SubTotal5;
	double Rate, Total;

	// Initializing the value of variables.
	
	Rate = 0.07;
	Item1 = 15.95;
	Item2 = 24.95;
	Item3 = 6.95;
	Item4 = 12.95;
	Item5 = 3.95;

	// Calculating Tax on each item.

	Tax1 = Item1 * Rate;
	Tax2 = Item2 * Rate;
	Tax3 = Item3 * Rate;
	Tax4 = Item4 * Rate;
	Tax5 = Item5 * Rate;

	// Calculating the subtotals.

	SubTotal1 = Item1 + Tax1;
	SubTotal2 = Item2 + Tax2;
	SubTotal3 = Item3 + Tax3;
	SubTotal4 = Item4 + Tax4;
	SubTotal5 = Item5 + Tax5;

	// Calculating Overall Totals.

	Total = SubTotal1 + SubTotal2 + SubTotal3 + SubTotal4 + SubTotal5;

	// Displaying the Cost.


	cout << " The following is your cost in details:" << endl << endl ;

	cout << " The actual cost of Item1 is : $ " << Item1 << endl ;
	cout << " The tax on Item1 is : $ " << Tax1 << endl;
	cout << " The subtotal on Item1 is : $ " << SubTotal1 << endl ;
	cout << " --------------------------------" << endl << endl ;

	cout << " The actual cost of Item2 is : $ " << Item2 << endl ;
	cout << " The tax on Item2 is : $ " << Tax2 << endl;
	cout << " The subtotal on Item2 is : $ " << SubTotal2 << endl;
	cout << " --------------------------------" << endl << endl ;

	cout << " The actual cost of Item3 is : $ " << Item3 << endl ;
	cout << " The tax on Item3 is : $ " << Tax3 << endl;
	cout << " The subtotal on Item3 is : $ " << SubTotal3 << endl;
	cout << " --------------------------------" << endl << endl ;

	cout << " The actual cost of Item4 is : $ " << Item4 << endl ;
	cout << " The tax on Item4 is : $ " << Tax4 << endl;
	cout << " The subtotal on Item4 is : $ " << SubTotal4 << endl;
	cout << " --------------------------------" << endl << endl ;

	cout << " The actual cost of Item5 is : $ " << Item5 << endl;
	cout << " The tax on Item5 is : $ " << Tax5 << endl;
	cout << " The subtotal on Item5 is : $ " << SubTotal5 << endl;
	cout << " --------------------------------" << endl << endl ;

	cout << "=================================" << endl ;

	cout << "Your overall total cost is $ " << Total << endl << endl ;

	system("PAUSE");
	return 0;
}