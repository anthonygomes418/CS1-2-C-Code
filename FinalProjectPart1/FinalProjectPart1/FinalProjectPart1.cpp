// This program writes user input to a file.
#include<iostream>
#include<fstream>
using namespace std;

int main ()
{
	// Creating Variables.
	ofstream outputFile;
	int num1, num2, num3, num4, num5, num6, num7, num8, num9, num10;
	
	// Open an output file.
	outputFile.open("FinalProjectPart1.txt");

	// Get 10 number variables from the user. 
	cout << " Please enter 10 number to run this program."<< endl;
	cout <<" Enter the first number." << endl;
	cin >> num1;
	cout <<" Enter the second number." << endl;
	cin >> num2;
	cout <<" Enter the third number." << endl;
	cin >> num3;
	cout <<" Enter the forth number." << endl;
	cin >> num4;
	cout <<" Enter the fifth number." << endl;
	cin >> num5;
	cout <<" Enter the sixth number." << endl;
	cin >> num6;
	cout <<" Enter the seventh number." << endl;
	cin >> num7;
	cout <<" Enter the eight number." << endl;
	cin >> num8;
	cout <<" Enter the ninth number." << endl;
	cin >> num9;
	cout <<" Enter the tenth number." << endl;
	cin >> num10;

	// Write numbers to a file.
	outputFile << num1 << endl;
	outputFile << num2 << endl;
	outputFile << num3 << endl;
	outputFile << num4 << endl;
	outputFile << num5 << endl;
	outputFile << num6 << endl;
	outputFile << num7 << endl;
	outputFile << num8 << endl;
	outputFile << num9 << endl;
	outputFile << num10 << endl;

	// Close the file.
	outputFile.close();
	cout << " Think I got the work done!" << endl;
	system("PAUSE");
	return 0;
}