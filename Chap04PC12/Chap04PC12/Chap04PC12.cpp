#include<iostream>
#include<iomanip>
using namespace std;

int main ()
{
    int price = 99;
	int quantity;
	double discount;
	double cost;
	double actualcost;

	cout << " Welcome to the program " << endl;
	cout << " Please enter the quantity of the software that you purchased " << endl;
	cin >> quantity;

	if ( quantity < 1)
		{
			cout << " Error! Please enter a valid positive number" << endl;
	     }

	else if ( quantity < 10)
		{
			actualcost = price *  quantity;
			discount= actualcost - ( actualcost * 0.2);
	        cout << "$" << actualcost << endl;
	     }

	else if ( quantity < 19 && quantity > 10)
		{
			actualcost = price *  quantity;
			discount= actualcost - ( actualcost * 0.2);
			cost = actualcost - discount;
	        cout << "$" << cost << endl;
	     }

    else if ( quantity < 49 && quantity > 20)
		{
			actualcost = price *  quantity;
			discount= actualcost - ( actualcost * 0.3);
			cost = actualcost - discount;
	        cout << "$" << cost << endl;
	     }
	
	else if ( quantity < 99 && quantity > 50)
		{
			actualcost = price *  quantity;
			discount= actualcost - ( actualcost * 0.4);
			cost = actualcost - discount;
	        cout << "$" << cost << endl;
	     }
	
	else ( quantity > 100);
	{
			actualcost = price *  quantity;
			discount= actualcost - ( actualcost * 0.5);
			cost = actualcost - discount;
	        cout << "$" << cost << endl;
	     }

	system("PAUSE");
	return 0;

}


