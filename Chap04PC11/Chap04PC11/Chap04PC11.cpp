#include<iostream>
#include<iomanip>
#include<cstdlib>
using namespace std;

int main ()
{
	int num1, num2, Actualanswer, StudentAnswer;

	num1 = rand ();
	num2 = rand ();

	cout <<" Please add the following numbers." << endl;
	
	cout << num1 << endl;
	cout << num2 << endl ;
	
	cout << "Please enter your answer"<< endl;
	cin >> StudentAnswer;

	Actualanswer = num1 + num2;

	if (Actualanswer = StudentAnswer)
		cout << "Well done! Your answer is correct.";
	else 
		cout << "Your answer is incorrect. Please try again."<< endl << endl<< endl;

	system("PAUSE");
	return 0;
}