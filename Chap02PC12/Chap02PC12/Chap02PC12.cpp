// Land Calculation.
#include<iostream>
using namespace std;

int main()
{
	
	// Creating variables.
	int acre, tract;
	double result;

	// Initializing the variables.
	acre = 43,560;
	tract = 391,876;

	// Calculations.
	result = tract/ acre ;

	// Displaying the result.
	cout << "The number of acres in a tract is " << result << endl;

	system("PAUSE");
	return 0;
}