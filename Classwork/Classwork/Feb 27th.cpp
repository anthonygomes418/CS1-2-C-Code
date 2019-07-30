#include<iostream>
#include<iomanip>
#include<string>
using namespace std;

int main()
{
	string name, name2;
	cout << "Give me your name please.\n";
	getline(cin,name);

	cout <<"\n\n\n\n\n" << setw(20) << name <<" "<< name2 << " is your name "<< endl << endl << endl<< endl<<endl;
	system("pause");

	return 0;
}