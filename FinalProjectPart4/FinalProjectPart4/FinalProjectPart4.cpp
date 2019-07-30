// This program writes the contents of an array to a file.
#include<iostream>
#include<fstream>
using namespace std;

int main()
{
	const int ARRAY_SIZE = 10;
	int numbers[ARRAY_SIZE];
	int count;
	ofstream outputFile;

	// Store values in the array.
	for ( count = 0; count< ARRAY_SIZE; count++)
		numbers[count] = count;

	//Open a file for output.
	outputFile.open("FinalProjectOutput.txt");

	// Write the array contents to a file.
	for ( count = 0; count < ARRAY_SIZE; count ++)
		outputFile << numbers[count] << endl;

	// Close the file.
	outputFile.close();

	// That's it!
	cout << " The numbers were saved to a file!" << endl;

	system("PAUSE");
	return 0;
}
