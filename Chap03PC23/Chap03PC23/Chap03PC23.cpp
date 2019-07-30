#include<iostream>
#include<iomanip>
#include<cmath>
using namespace std;

int main ()
{
	const int NoShares      = 1000;
	const double PurchasePrice = 45.50;
	const double SellingPrice  = 56.90;

	double PurchaseCost, PurchaseCommission, SalesCost, SalesCommission, TotalPurchase, TotalSales, Profit;
	char ch;

	cout << "Welcome to the program" << endl;
	cout << "Please press enter to continue" << endl;
	cin.get(ch);

	// Calculaions

	PurchaseCost = NoShares * PurchasePrice;
	PurchaseCommission = PurchaseCost * 0.02;
	TotalPurchase = PurchaseCost + PurchaseCommission;
	SalesCost = NoShares * SellingPrice;
	SalesCommission = SalesCost * 0.02;
	TotalSales = SalesCost + SalesCommission;
	Profit  = (TotalSales) - (TotalPurchase);

	cout << " The purchase price was       $ " << fixed << setprecision(2) << setw(7)<< PurchaseCost << endl;
	cout << " The purchase commission was  $ " << fixed<<  setprecision(2) << setw(8)<< PurchaseCommission << endl;
	cout << " The total purchase cost was  $ " << fixed << setprecision(2) << setw(7)<< TotalPurchase << endl;
	cout << " The sales price was          $ " << fixed << setprecision(2) << setw(7)<< SalesCost << endl;
	cout << " The sales commission was     $ " << fixed << setprecision(2) << setw(8)<< SalesCommission << endl;
	cout << " The total sales cost was     $ " << fixed << setprecision(2) << setw(7)<< TotalSales << endl;
	cout << " Profit =                     $ " << fixed << setprecision(2) << setw(7)<< Profit << endl;

	system("PAUSE");
	return 0;
}