#include<iostream>
#include<iomanip>
#include<string>
using namespace std;

int main()
{
	char ch;
	int x;

	cout << "Type a character please.\n";
	cin >> ch;
	cout << "Type a number and press enter.\n";
	cin >> x;

	cout <<"You entered" <<" "<< ch << "and" << x << endl;
	system("pause");

	return 0;
}