 /* Anthony Gomes
   Student ID 234726
   To : Mr Benjamin Garlington
   Computer Science II Assignment
   Chapter 03 Programming Challenge #19
*/

/* 4. Areas of Rectangles
The area of a rectangle is the rectangle’s length times its width. 
Write a program that asks for the length and width of two rectangles. 
The program should tell the user which rectangle has the greater area, 
or if the areas are the same.
*/

// Setting up the preprocessors
#include<iostream>
#include<cmath>
using namespace std;

int main()
{
	// Creating the variables

	double Lenth1, Lenth2, Width1, Width2, Area1, Area2;


	// Prompting the user to input the data
	cout << " This program will calculate the areas of two rectangles and compare their areas." << endl;
	cout << " Upon a request please enter the dimensions of the two desired rectangles." << endl << endl << endl;

	cout << " Please enter the length of the first rectangle." << endl;
	cin >> Lenth1;

	cout << " Please enter the width of the first rectangle." << endl;
	cin >> Width1;
	
	
	cout << " Please enter the length of the second rectangle." << endl;
	cin >> Lenth2;

	cout << " Please enter the width of the second rectangle." << endl;
	cin >> Width2;


	// Calculating the areas

	Area1 = Lenth1 * Width1;

	Area2 = Lenth2 * Width2;

	
	cout << (Area1 > Area2 ? " The first rectangle is larger": " The second rectangle is larger") << endl << endl;

	system("PAUSE");
	return 0;
}