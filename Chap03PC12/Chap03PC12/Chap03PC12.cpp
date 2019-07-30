#include<iostream>
#include<iomanip>
using namespace std;

int main()
{
	double Fahrenheit, Celcius;

	cout << "Please enter the temperature in Celcius."<< endl;
	cin >> Celcius;

	Fahrenheit = (9*Celcius)/ 5 + 32;

	cout << "The temperaure is "<< setprecision(2) << fixed << Fahrenheit<< " degrees Fahrenheit" << endl<< endl;

	system("PAUSE");
	return 0;
}