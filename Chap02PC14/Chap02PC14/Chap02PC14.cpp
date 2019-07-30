// Personal Information
#include<iostream>
#include<string>
using namespace std;

int main ()
{
	string Name, City, State, TelephoneNo, CollegeMajor;
	int ZIP_Code;

	cout << "Please enter your name." << endl;
	cin >> Name;
	cout << "Please enter your City." << endl;
	cin >> City;
	cout << "Please enter your State" << endl;
	cin >> State;
	cout << "Please enter your ZIP CODE" << endl;
	cin >> ZIP_Code;
	cout << "Please enter your Telephone Number" << endl;
	cin >> TelephoneNo;
	cout << "Please enter your College Major" << endl;
	cin >> CollegeMajor;

	cout << "Your Details are as follows :-------------------------------"<<Name<< City << State << ZIP_Code<< TelephoneNo<<CollegeMajor<< endl;
	

	system("PAUSE");
	return 0;
}