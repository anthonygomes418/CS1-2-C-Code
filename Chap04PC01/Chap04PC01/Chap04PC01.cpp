#include<iostream>
#include<iomanip>
#include<cmath>
using namespace std;

int main()
{
	double Num1, Num2, Greater;

	cout << "Please enter a number." << endl;
	cin >> Num1;

	cout << "Please enter another number." << endl;
	cin >> Num2;

	if (Num1 > Num2)
		cout << "The larger number is "<< Num1 << endl;
	else
		cout << "The larger number is " << Num2 << endl;


	system("PAUSE");
	return 0;

}