#include<iostream>
#include<iomanip>
#include<string>
using namespace std;

int main ()
{
	string Month;
	double Year, AmountCollected,Sales, StateTax, CountyTax, TotalTax;

	cout << "Please enter the month"<< endl;
	getline (cin, Month);
    cout << "Please enter the year" << endl;
	cin >> Year;
	cout <<"Please enter the total amount of money collected during the month." << endl;
	cin >> AmountCollected;
	

	Sales = AmountCollected/ 1.06;

	StateTax = Sales * 0.04;
	CountyTax = Sales * 0.02;
	TotalTax = StateTax + CountyTax;

	cout << "MONTH : " << setw(3) << Month << endl;
	cout << "YEAR : " << setw(3) << Year << endl ;
	cout << "----------------------------------"<< endl;
	cout << "Total Collected : " << setw(5) << "$"<< setprecision(2)<< fixed << right << AmountCollected << endl;
	cout << "Sales           : " << setw(5) << "$"<< setprecision(2)<< fixed << right << Sales << endl;
	cout << "County Tax      : " << setw(5) << "$"<< setprecision(2)<< fixed << right << CountyTax<< endl;
	cout << "State Tax       : " << setw(5) << "$"<< setprecision(2)<< fixed << right << StateTax<< endl;
	cout << "Total Tax       : " << setw(5) << "$"<< setprecision(2)<< fixed << right << TotalTax<< endl;

	system("PAUSE");
	return 0;
}