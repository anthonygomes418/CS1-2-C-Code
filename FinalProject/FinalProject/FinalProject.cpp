#include<iostream>
#include<fstream>
#include<cstdlib>
#include<cmath>
using namespace std;

double PassDataToArray();

int main ()
{ 

	//  Prompting the User to Input Numbers.

	ofstream FinalProject("FinalProjectNumbers.txt");

	cout <<" PLease enter 10 numbers" << endl;
	cout <<" Press Ctrl+Z to quit " << endl;

	double numbers;

	while ( cin >> numbers)
	{
		FinalProject << numbers << endl;

	}

	// Passing data from the file to the array.
	void PassDataToArray();

	system("PAUSE");
	return 0;
}

double PassDataToArray()
{

	const int Array_Size = 10;
	double numbers[Array_Size];
	int count = 0;
	ifstream FinalProject;

	// Open the file.
	FinalProject.open("FinalProjectNumbers.txt");

	// Reading Numbers from file to Array.
	while ( count < Array_Size && FinalProject >> numbers[count])
		count++;
	// Close the file.
	FinalProject.close();

	// Display the numbers.
	cout << " The numbers are: " << endl;
	for ( count = 0 ;count < Array_Size; count ++)
		cout << numbers[count] << " " ;
	cout << endl;
	
}

