// Distance per tank of gas.
#include<iostream>
using namespace std;

int main ()
{
	double Distance_Town, Distance_Highway, Speed_Highway, Speed_Town;
	int Gas;

	// Initializing gallons of gas.
	
	Gas = 20;

	// Initializing speed values.

	Speed_Highway = 28.9;
	Speed_Town    = 23.5;

	// Finding distance travelled.
	Distance_Town    = Gas * Speed_Town;
	Distance_Highway = Gas * Speed_Highway;

	// Displaying output.
	cout << "The distance that can be travelled through a town is " ;
	cout << Distance_Town << " miles." << endl;
	cout << "The distance that can be travelled through a highway is " ;
	cout << Distance_Highway << " miles." << endl;

	system("PAUSE");
	return 0;
}