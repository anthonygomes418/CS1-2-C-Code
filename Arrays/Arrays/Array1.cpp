#include<iostream>
#include<cstring>
#include<iomanip>
#include <fstream>
using namespace std;

int main ()
{
	double rainfall[12};
	double total = 0;
	double avg = 0;
	double maxrain = 0;
	double minrain = 0;
	double temprain = 0;
	ifstream inFile;

	// assign values to rainfall array

	for ( int i =0; i < 12; i++)
	{
		cout << "Please enter rainfall for a month" << endl;
		cin >> rainfall[1];
		total += rainfall[1];

	}


	 // Open the file.
	  
	 inFile.open("Numbers.txt");

	// average

	avg = total/12;

	 // Read the three numbers from the file.
     inFile >> value1;
     inFile >> value2;
     inFile >> value3;
	 inFile >> value4;
	 inFile >> value5;
	 inFile >> value6;
	 inFile >> value7;
	 inFile >> value8;
	 inFile >> value9;
	 inFile >> value10;

	for (int i = 1; i <= 12; i++)
	{
		tempRain = rainfall[1];
		if ( temprain < minrain)
			minrain = temprain;
		if ( temprain > maxrain)
			maxrain = temprain;
	}


	cout << "Total rainfall was : " << setprecision(2) << fixed << showpoint << total << endl;
	cout << "Average rainfall was : " << setprecision(2) << fixed << showpoint << avg << endl;
	cout << "Highest rainfall was : " << setprecision(2) << fixed << showpoint << maxrain << endl;
	cout << "Lowest rainfall was : " << setprecision(2) << fixed << showpoint << minrain << endl;



	}
