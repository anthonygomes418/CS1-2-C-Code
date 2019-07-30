#include<iostream>
#include<iomanip>
#include<cstdlib>
#include<cstdlib>
using namespace std;

void coinToss();
int NumberToss;

int main ()
{

	cout << " Welcome to the program"<< endl;
	cout << " Please enter the number of times you want to toss the coin"<< endl;
	cin >> NumberToss; 
	cout << "You selected " << NumberToss << " coin tosses" << endl;
	coinToss();

	system("PAUSE");
	return 0;
}

void coinToss()
{
	// Constants 
	const int UPPER = 2; // Heads
	const int LOWER = 1; // Tails

	// Variables
	int toss;
	int count = 0;

	for (count = 0; count < NumberToss; count ++)
	{
		toss =  rand() % UPPER + LOWER;
		if ( toss = 1)
		{
			cout << "HEADS" << endl;
		}
		else 
		{
			cout << "TAILS" << endl;
		}
	}

}
