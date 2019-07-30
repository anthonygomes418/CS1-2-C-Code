// Stadium Seating! 
#include<iostream>
#include<iomanip>
using namespace std;
int main ()
{
	// Creating Variables to hold data.
	double ClassA, ClassB, ClassC, SalesA, SalesB, SalesC;

	// Gathering data for calculation.
	cout << "Please enter the number of Class A seats sold :" << endl;
	cin >> ClassA;
	cout << "Please enter the number of Class B seats sold :" << endl;
	cin >> ClassB;
	cout << "Please enter the number of Class C seats sold :" << endl;
	cin >> ClassC;

	// Calculating the sales revenue on the seats.
	SalesA = ClassA * 15;
	SalesB = ClassB * 12;
	SalesC = ClassC * 9;

	// Displaying the results.
	cout << "The sales from Class A seats was $ " << setprecision(2) << fixed << SalesA << endl;
	cout << "The sales from Class B seats was $ " << setprecision(2) << fixed << SalesB << endl;
	cout << "The sales from Class C seats was $ " << setprecision(2) << fixed << SalesC << endl;

	system("PAUSE");
	return 0;
}