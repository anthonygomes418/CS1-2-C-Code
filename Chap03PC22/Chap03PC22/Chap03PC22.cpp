#include<iostream>
#include<iomanip>
#include<cmath>
using namespace std;

int main ()
{
	double UserInput, Sin, Cos, Tan;

	cout << "Please enter the angle in radian" << endl;
	cin >> UserInput;
	
	Sin = sin(UserInput);
	Cos = cos(UserInput);
	Tan = tan(UserInput);
	
	cout <<"Sin = " << setprecision(4) << fixed << Sin << endl;
	cout <<"Cos = " << setprecision(4) << fixed << Cos << endl; 
	cout <<"Tan = " << setprecision(4) << fixed << Tan << endl;   

	system("PAUSE");
	return 0;
}


