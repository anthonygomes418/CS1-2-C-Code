#include<iostream>
#include <iomanip>
using namespace std;

int main ()
{
	double Weightwidget = 12.5;
	double WeightPallet, WeightTotal;
    int widgets;

	cout << "Please enter the weight of the pallet without the widgets on it "<< endl;
	cin >> WeightTotal;
	cout << "Please enter the weight of the pallet with the widget on it" << endl;
	cin >> WeightPallet;

	widgets = (WeightPallet - WeightTotal)/ Weightwidget;

	cout << "This pallet has " << widgets << " " << "widgets on it";

	system("PAUSE");
	return 0;
}