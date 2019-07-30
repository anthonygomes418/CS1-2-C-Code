/*5. Body Mass Index
Write a program that calculates and displays a person’s body mass index (BMI). 
The BMI is often used to determine whether a person with a sedentary lifestyle is overweight or underweight for his or her height.

A person’s BMI is calculated with the following formula:
BMI = weight × 703/height2

where weight is measured in pounds and height is measured in inches.

The program should display a message indicating whether the person has optimal weight, is underweight, or is overweight.
A sedentary person’s weight is considered to be optimal if his or her BMI is between 18.5 and 25. 
If the BMI is less than 18.5, the person is considered to be underweight. 
If the BMI value is greater than 25, the person is considered to be overweight.
*/

#include<iostream>
#include<cmath>
using namespace std;

int main ()
{
	double Height, Weight, BMI;

	cout << " Please enter your height in inches." << endl;
	cin >> Height;

	cout << " Please enter your wieght in pounds." << endl;
	cin >> Weight;

	BMI = ( Weight * (703/(pow(Height,2)))) ;

	cout <<" Your BMI is " << BMI << endl;

	if (BMI < 18.5)
	{
		cout << " According to the calculations you are underweight." << endl;
	}
	else if (BMI > 25)
	{
		cout << " According to the calculations you are overweight." << endl;
	}
	else
	{
		cout << " According to the calculations you have an optimal BMI." << endl;
	}

	system("PAUSE");
	return 0;
}


