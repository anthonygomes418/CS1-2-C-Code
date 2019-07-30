// This program calculates the State and County Sales Tax on a product.
#include<iostream>
#include<cmath>
using namespace std;

int main ()
{
	double Cost, StateTax, CountyTax, TotalTax, TotalCost;

	// Adjusting the tax rates.
	StateTax = 0.04;
	CountyTax = 0.02;

	// Prompt the user to provide cost of the article.
	cout << " Please enter the cost of the product."<< endl;
	cin >> Cost;

	// Calculate the total tax.
	TotalTax = (Cost*StateTax) + (Cost*CountyTax);


	// Calculate the total cost.
	TotalCost = Cost + TotalTax;
	cout << "The Total cost is $ "<< TotalCost << endl;


	system("PAUSE");
	return 0;
}