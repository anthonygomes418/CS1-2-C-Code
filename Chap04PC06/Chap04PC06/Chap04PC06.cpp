#include<iostream>
#include<iomanip>
#include<cmath>
using namespace std;

int main()
{
	double Mass, Weight;

	cout << "Please enter the mass of the object." << endl;
	cin >> Mass;

	Weight = Mass * 9.8;

	if (Weight > 1000)
		cout << "The object is too heavy" << endl;
	else if (Weight < 100)
		cout << "The object is too light" << endl;
	else 
		cout << "The object weights "<< Weight << "pounds" << endl << endl << endl;
	


	system("PAUSE");
	return 0;

}