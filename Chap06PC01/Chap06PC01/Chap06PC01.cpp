 /* Anthony Gomes
   Student ID 234726
   To : Mr Benjamin Garlington
   Computer Science 1 Assignment
   Chapter 06 Programming Challenge #01
*/


#include<iostream>
using namespace std;

double CalculateRetail(double, double);

int main ()
{
	double WholesaleCost = 0;
	double Percentage    = 0;
	double TotalPrice    = 0;

	cout << "Please enter a non-negative number for the Wholesale price and the percentage.";
	cin >> WholesaleCost >> Percentage;

	while (WholesaleCost < 0 || percentage < 0);
	{
		cout << "Please enter a non-negative number for the Wholesale price and the percentage.";
	    cin >> WholesaleCost >> Percentage;
	}

	TotalPrice = CalculateRetail(WholesaleCost, Percentage);
	cout << "The total cost is : $ " << TotalPrice;

	system("PAUSE");
	return 0;
}

double CalculateRetail(double cost, double percentage);
{
	double TotalCost = 0;
	TotalCost = ((cost/100) * percent) + cost;
	return TotalCost;
}