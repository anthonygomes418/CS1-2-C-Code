// This program writes user input to a file.
#include<iostream>
#include<fstream>
#include<cmath>
using namespace std;


int Part1();
int Part2();
int Part3();
void squareArray( int[], int);
void showValues(int[], int);

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
	
	int Part1();
	int Part2();
	int Part3();
	system("PAUSE");
	return 0;

	
}

// This file reads data from a file to an array.

int Part1()
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

	
}

// This program squares the values of the elements held in an array.

int Part2()
{
	const int ARRAY_SIZE = 10;
	int set[ARRAY_SIZE] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};

	// Display the initial values.
	cout << "The array's elements are : "<< endl;
	showValues(set, ARRAY_SIZE);

	// Find the Squares of the elements in the array.
	squareArray( set, ARRAY_SIZE);

	// Display The Squares.
	cout << "After calling the square array function the elements are :" << endl;
	showValues(set, ARRAY_SIZE);

	

}

void squareArray( int nums[], int size)
{
	for (int index = 0; index < size; index++)
		nums[index] *= nums[index];
}

void showValues( int nums[], int size)
{
	for( int index = 0; index < size; index++)
		cout << nums[index] << " " ;
	cout << endl;
	}

// This program writes the contents of an array to a file.
int Part3()
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
}
