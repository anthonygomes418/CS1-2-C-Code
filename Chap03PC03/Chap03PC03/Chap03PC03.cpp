#include<iostream>
#include<iomanip>
using namespace std;

int main ()
{
	// Creating Variables to store the test scores and the average.
	double Test1, Test2, Test3, Test4, Test5, Average, Total;

	// Requesting for information from the user.
	cout << "Please enter your score for one test " << endl;
	cin >> Test1;
	cout << "Please enter your score for another test " << endl;
	cin >> Test2;
	cout << "Please enter your score for another test " << endl;
	cin >> Test3;
	cout << "Please enter your score for another test " << endl;
	cin >> Test4;
	cout << "Please enter your score for another test " << endl;
	cin >> Test5;

	// Making the calculations.
	Total = Test1 + Test2 + Test3 + Test4 + Test5;
	Average = Total / 5;

	// Showing output.
	cout << "Your Average score from the five tests was "<< setprecision(1) << fixed << Average << endl;

	system("PAUSE");
	return 0;
}
