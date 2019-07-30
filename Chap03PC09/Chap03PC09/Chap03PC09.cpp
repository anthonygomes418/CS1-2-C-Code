#include<iostream>
#include<iomanip>
using namespace std;

int main ()
{
	double CalPerCookie = 30;
	double CalConsumed, CookieEaten;

	cout << "Please enter the number of cookies eaten "<< endl;
	cin >> CookieEaten;

	CalConsumed = CookieEaten * CalPerCookie ;

	cout << " You have consumed " << CalConsumed << " calories" << endl;

	system("PAUSE");
	return 0;
}