#include<iostream>
#include<iomanip>
using namespace std;

int main ()
{
	double ReplacementCost, MinInsurance;

	cout << "Please enter the minimum replacement cost of your house" << endl;
	cin >> ReplacementCost;
	
	MinInsurance = ReplacementCost * 0.8;

	cout << "The minimum insurance cost is $ " << setprecision(2) << fixed << MinInsurance << endl;

	system("PAUSE");
	return 0;
}