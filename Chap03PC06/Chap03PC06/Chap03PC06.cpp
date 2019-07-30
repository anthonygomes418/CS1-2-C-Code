#include<iostream>
#include<iomanip>
using namespace std;

int main ()
{
	double Sugar = 1.5;
	double Butter = 1; 
	double Flour = 2.75;
	int NoCookies;
	double ReqSugar, ReqButter, ReqFlour;

	cout << "Please enter the number of cookies you want to make " << endl;
	cin >> NoCookies;

	ReqSugar = (Sugar/ 48) * NoCookies;
	ReqButter = (Butter / 48) * NoCookies;
	ReqFlour = (Flour / 48) * NoCookies;

	cout << "You will need "<<setprecision(3) << fixed << ReqSugar <<" "<< "cups of sugar,"<<setprecision(3) << fixed << ReqButter;
	cout <<" " << "cups of butter and "<<setprecision(3) << fixed << ReqFlour <<" " << "cups of butter ." << endl;

	system("PAUSE");
	return 0;
}