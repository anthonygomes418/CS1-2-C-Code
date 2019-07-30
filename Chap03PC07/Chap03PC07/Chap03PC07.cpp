#include<iostream>
#include<iomanip>
using namespace std;

int main ()
{
	string MovieName;
	int AdultTickets, ChildTickets;
	double GrossProfit, NetProfit, AmountDistributor;

	cout << "Please enter the name of the movie"<< endl;
	MovieName = cin.get();
	cout << "Please enter the number of adult tickets sold"<< endl;
	cin >> AdultTickets;
	cout << "Please enter the number of child tickets sold" << endl;
	cin >> ChildTickets;

	// Calculations
	GrossProfit = (AdultTickets * 10) + (ChildTickets * 6);
	NetProfit = GrossProfit * 0.20;
	AmountDistributor = GrossProfit * 0.80;

	cout << "=============================================="<< endl;
	cout << "Movie Name : " <<setw(10) <<" "<< MovieName << endl;
	cout << "Adult Tickets Sold : " << setw(10) << AdultTickets << endl;
	cout << "Child Tickets Sold : " << setw(10) << ChildTickets << endl;
	cout << "Gross Box Office Profit : " << setw(10) <<setprecision(3) << fixed<< GrossProfit<< endl;
	cout << "Net Box Office Profit :" << setw(10) <<setprecision(3) << fixed << NetProfit << endl;
	cout << "Amount paid to distributor :" << setw(10) << AmountDistributor << endl;

	system("PAUSE");
	return 0;
}