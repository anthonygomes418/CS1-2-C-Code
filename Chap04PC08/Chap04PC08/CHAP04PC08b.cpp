/*
8. Color Mixer.
The colors red, blue and yellow are known as the primary colors because they cannot be made by mixing other colors.
When you mix two primary colors, you get a scondary color as shown below :

When you mix red and blue, you get purple.
When you mix red and yellow, you get orange.
When you mix blue and yellow, you get green.

Write a program that prompts the user to enter the names of two primary colors to mix.
If the user enters anything other than "red", "blue" and "yellow", the program should 
display an error message. Otherwise, the program should display the name of the secondary 
color that results by mixing the two colors.
*/

#include<iostream>
#include<string>
using namespace std;

int main ()
{
	string Color1, Color2, Result;

	cout << " There are three colors, red, blue and yellow, are known as the primary colors" ;
	cout << " because they cannot be made by mixing other colors. " << endl ;
	cout << " However when you mix these colors, you can get a wide variety of colors." << endl;
	
	cout << " If you wish to continue please enter the names of two of the three primary colors that you want to mix." << endl;
	
	cout << "Please enter Color 1" << endl;
	cin >> Color1;
	cout << "Please enter another color"<< endl;
	cin >> Color2;

	if( Color1 == "red" && Color2 == "blue")
		cout << " The color is purple." << endl;
	else if( Color1 == "blue" && Color2 == "red")
		cout << " The color is purple." << endl;
	else if( Color1 == "red" && Color2 == "yellow")
		cout << " The color is orange." << endl;
	else if( Color1 == "yellow" && Color2 == "red")
		cout << " The color is orange." << endl;
	else if( Color1 == "blue" && Color2 == "yellow")
		cout << " The color is green." << endl;
	else if  ( Color1 == "yellow" && Color2 == "red")
		cout << " The color is green." << endl;
	else 
		cout << " You did not enter an acceptable color" << endl;



     system("PAUSE");
	 return 0;

}