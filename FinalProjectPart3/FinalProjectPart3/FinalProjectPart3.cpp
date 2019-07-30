// This program squares the values of the elements held in an array.
#include<iostream>
#include<cmath>
using namespace std;


// Function Prototypes
void squareArray( int[], int);
void showValues(int[], int);

int main()
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

	system("PAUSE");
	return 0;

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
