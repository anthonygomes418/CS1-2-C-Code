//Sales Prediction for East Coast
// This program will generate the sale of East Coast based on the sales figure of the sale department.
#include<iostream>
#include<cmath>
using namespace std;

int main()
{
	// Creating the variables
	double Sales_Division, Percentage, Total_Sale;

	// Adjusting the percentile.
	Percentage = 0.58;

	// Prompt the user to enter sale for the Sales Department.
	cout << "Please enter the sale for the Sale Department." << endl;
	cin >> Sales_Division;

	// Calculate the total sales.
	Total_Sale = Sales_Division*Percentage;
	
	// Display the total sales.
	cout <<" The predicted sale for the company is $ "<< Total_Sale << endl;

	system("PAUSE");
	return 0;
}