#include<iostream>
using namespace std;
 
int main ()
{
	int numbers[10];
	int smallest = 0;
	int largest =  0;
	int temp = 0;

	for (int i = 0; i < 10; i ++)
	{ 
		cout << "Please enter number1 "<< i + 1 << " : "<< endl;
		cin >> numbers[i];

	}

	smallest = numbers[0];
	largest = numbers[0];

	for (int i = 1; i <= 10; i ++)
	{
		temp = numbers[1];
		if (temp < smallest)
			smallest = temp;

		if (temp > largest)
			largest = temp;
	}

	cout <<"The Largest number is " << largest << endl;
	cout << "The smallest Number is " << smallest << endl;

	system("PAUSE");
	return 0;
}