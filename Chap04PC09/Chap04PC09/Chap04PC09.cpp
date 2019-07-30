/*9. Change for a Dollar Game
Create a change-counting game that gets the user to enter the number of coins required to make exactly one dollar. 
The program should ask the user to enter the number of pennies, nickels, dimes, and quarters. If the total value of the coins 
entered is equal to one dollar, the program should congratulate the user for winning the game. Otherwise, the program should 
display a message indicating whether the amount entered was more than or less than one dollar.
*/

#include<iostream>
#include<string>
using namespace std;

int main ()
{
	// Creating the necessary varian
	int pennies, nickels, dimes, quarters;
	int total = 0;

	cout << " Welcome to the game "<< endl;
	cout << " You will calculate the change needed to make $1 " << endl;
	cout << " Please enter the change of a certain type needed to make $1 " << endl;
	
	cout << " Enter the number of pennies needed to make $1 " << endl;
	cin >> pennies;
	
	if(pennies == 100)
	{
		total = total + 1;
	}
	else 
	{
		cout << " Your answer was incorrect" << endl;
	}

	
	cout << " Enter the number of nickels needed to make $1 " << endl;
	cin >> nickels;
	
	if(nickels == 20)
	{
		total = total + 1;
	}
	else 
	{
		cout << " Your answer was incorrect" << endl;
	}

	cout << " Enter the number of dimes needed to make $1 " << endl;
	cin >> dimes;
	
	if(dimes == 10)
	{
		total = total + 1;
	}
	else 
	{
		cout << " Your answer was incorrect" << endl;
	}

	cout << " Enter the number of quarters needed to make $1 " << endl;
	cin >> quarters;
	
	if(quarters == 4)
	{
		total = total + 1;
	}
	else 
	{
		cout << " Your answer was incorrect" << endl;
	}


	if ( total == 4)
	{
		cout << " Congratulations! You've won the game" << endl;
	}
	else 
	{
		cout << " PLease try again" << endl;
	}

	system ("PAUSE");
	return 0;
}