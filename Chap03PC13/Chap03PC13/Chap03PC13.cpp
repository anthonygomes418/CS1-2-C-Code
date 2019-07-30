#include<iostream>
#include<iomanip>
using namespace std;

int main ()
{
	const double YEN_PER_DOLLAR = 98.93;
	const double EUROS_PER_DOLLAR = 0.74;
	double USDOLLARS, EUROS, YEN;

	cout << "Please enter the amount in dollars"<< endl;
	cin >> USDOLLARS;

	EUROS = USDOLLARS * EUROS_PER_DOLLAR ;
	YEN = USDOLLARS * YEN_PER_DOLLAR;

	cout << setprecision(3) << fixed << "$" << USDOLLARS << " equal ";
	cout << setprecision(3) << fixed << EUROS << " euros and " << setprecision(3) << fixed << YEN <<" Yen"<< endl<< endl;

	system("PAUSE");
	return 0;
}