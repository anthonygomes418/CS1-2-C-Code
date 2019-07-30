#include<iostream>
#include<iomanip>
using namespace std;

int main ()
{
	double Loan, Insurance, Gas, Oil, Tyres, Maintenance, TotalMonth, TotalYear;

	cout <<"Please enter the following information for each month :" << endl;
	cout <<"Loan Payment:"<< endl;
	cin >> Loan;
	cout << "Insurance"<< endl;
	cin >> Insurance;
	cout << "Gas"<< endl;
	cin >> Gas;
	cout << "Oil" << endl;
	cin >> Oil;
	cout << "Tyres"<< endl;
	cin >>Tyres;
	cout << "Maintenance" << endl;
	cin >> Maintenance;

	TotalMonth = (Loan + Insurance + Gas + Oil + Tyres + Maintenance);
	TotalYear = (Loan + Insurance + Gas + Oil + Tyres + Maintenance) * 12 ;
	cout <<" Total expenses for the month : "<<setprecision(2)<< fixed <<TotalMonth << endl;
	cout <<" Total expenses for the year : "<<setprecision(2)<< fixed <<TotalYear << endl;

	system("PAUSE");
	return 0;
}