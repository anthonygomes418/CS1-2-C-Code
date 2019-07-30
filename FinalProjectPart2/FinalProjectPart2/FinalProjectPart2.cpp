// This file reads data from a file to an array.
#include<iostream>
#include<fstream>
using namespace std;

int main ()
{
	const int ARRAY_SIZE = 10; // Array Size.
	int numbers[ARRAY_SIZE] ;  // Array with 10 elements.
	int count = 0;             // Loop counter variable.  
	ifstream inputFile;        // Input File Stream Object.

	// Open the file.
	inputFile.open("FinalProjectPart1.txt");

	// Read the numbers from the file into the array.
	while(count < ARRAY_SIZE && inputFile >> numbers[count]) 
		count++ ;
	// Close the file. 
	inputFile.close();

	// Display the numbers read;
	cout << " The numbers are :" << endl;
	for ( count = 0; count < ARRAY_SIZE; count++ )
		cout << numbers[count] << " ";
	cout << endl;

	system("PAUSE");
	return 0;
}
