/* Name : Anthony Priyo Gomes
   Computer Science II
   Benjamin Garlington
   Chapter 03 Programming Challenge 20
 */
#include<iostream>
#include<iomanip>
#include<cmath>
using namespace std;

int main ()
{
	// Creating the variables
	double Diameter, NoSlices, Radius, TotalArea;
	const int Area = 14.125;

	// Prompting user to provide data for the size of pizza
	cout << "Please enter the diameter of the pizza in inches" << endl;
	cin >> Diameter;
	Radius = Diameter/2;

	// Calculating the Number 
	TotalArea = 3.142*(pow(Radius,2));

	NoSlices = TotalArea/ 14.125;

	// Displaying the output
	cout << "The will be "<< setprecision(1) << fixed << NoSlices << " slices" << endl << endl;

	system("PAUSE");
	return 0;
}