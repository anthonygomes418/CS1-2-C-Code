/*
10. 
a.Design an application for Domicile Designs that gets sales transaction data, including an account number, customer name, and purchase price.
The store charges 1.25 percent interest on the balance due each month. 
Output the account number and name, then output the customer’s projected balance each month for the next 12 months.
Assume that when the balance reaches $25 or less, the customer can pay off the account. 

At the beginning of every month, 1.25 percent interest is added to the balance, and then the customer makes a payment equal to 7 percent of the current balance.
Assume that the customer makes no new purchases.

b. Modify the Domicile Designs application so it executes continuously for any number of customers until a sentinel value is supplied for the account number.
*/


// Setting up the Preprocessors
#include<iostream>
#include<cmath>
#include<iomanip>
#include<string>
using namespace std;


// Prototypes for the functions to be called
double First();
double Second();
double Third();
double Forth();
double Fifth();
double Sixth();
double Seventh();
double Eigth();
double Ninth();
double Tenth();
double Eleventh();
double Twelveth();



// Global VAriables
int PurchasePrice, AccountNo;
double MonthA, MonthB, MonthC, MonthD, MonthE, MonthF, MonthG, MonthH, MonthI, MonthJ, MonthK, MonthL;


int main ()
{
	// Local Variables
	string TransactionNo, CustomerNo;
	double Month1, Month2, Month3, Month4, Month5, Month6, Month7, Month8, Month9, Month10, Month11, Month12;



	// Prompting User to provide the system with input
	cout << " Account Number : " << endl;
	cout << "Or 99999 to quit" << endl;
	cin >> AccountNo ;
	

	// Data Validation with Account Number
	if ( AccountNo == 9999)
	{ 
		cout << "You have ended the program" << endl;
	}

	else

	  {
		cout << "Welcome to the program" << endl;
	    cout << "PLease answer the following questions when prompted:" << endl;
	    cout << " Transaction Number :" << endl;
	    cin >> TransactionNo;
	    cout << " Customer's Name :" << endl;
	    cin >> CustomerNo ;
		cout << " Initial Purchase Price : " << endl;
	    cin >> PurchasePrice;
        cout << TransactionNo << endl;
	    cout << CustomerNo << endl;
	    cout << AccountNo << endl;
	    cout << "$ " << PurchasePrice << endl;


		
	         Month1 = First();
             cout <<" The payment due for Month 1 = $ " << Month1 << endl;
		
	         Month2 = Second();
	         cout <<"The payment due for Month 2 = $ " << Month2 << endl;
	
     	     Month3 = Third();
	         cout <<" The payment due for Month 3 = $ " << Month3 << endl;

	         Month4 = Forth();
	         cout <<" The payment due for Month 4 = $ " << Month4 << endl;
	
	         Month5 = Fifth();
	         cout <<" The payment due for Month 5 = $ " << Month5 << endl;
	
       	     Month6 = Sixth();
	         cout <<" The payment due for Month 6 = $ " << Month6 << endl;

	         Month7 = Seventh();
	         cout <<" The payment due for Month 7 = $ " << Month7 << endl;

	         Month8 = Eigth();
	         cout <<" The payment due for Month 8 = $ " << Month8 << endl;

	         Month9 = Ninth();
	         cout <<" The payment due for Month 9 = $ " << Month9 << endl;

	         Month10 = Tenth();
	         cout <<" The payment due for Month 10 = $ " << Month10 << endl;

	         Month11 = Eleventh();
	         cout <<" The payment due for Month 11 = $ " << Month11 << endl;

	         Month12 = Twelveth();
	         cout <<" The payment due for Month 12 = $ " << Month12 << endl;
		  }
		
		
		

	system("PAUSE");
	return 0;
}

 double First()
 {
	     MonthA = PurchasePrice + ( PurchasePrice * 0.125);
		 return MonthA;
 }


 double Second()
 {
		 MonthB = (PurchasePrice + ( ( MonthA - ( 0.7 * MonthA ) ) * 0.125 ) ) ;
		 return MonthB;
 }


 double Third()
 {
		 MonthC = (PurchasePrice + ( ( MonthB - ( 0.7 * MonthB ) ) * 0.125 ) ) ;
		 return MonthC;
 }


 double Forth()
 {
		 MonthD = (PurchasePrice + ( ( MonthC - ( 0.7 * MonthC ) ) * 0.125 ) ) ;
		 return MonthD;
 }

 
 double Fifth()
 {
		 MonthE = (PurchasePrice + ( ( MonthD - ( 0.7 * MonthD ) ) * 0.125 ) ) ;
		 return MonthE;
 }
 
 
 double Sixth()
 {
		 MonthF = (PurchasePrice + ( ( MonthE - ( 0.7 * MonthE ) ) * 0.125 ) ) ;
		 return MonthF;
 }


 double Seventh()
 {
		 MonthG = (PurchasePrice + ( ( MonthF - ( 0.7 * MonthF ) ) * 0.125 ) ) ;
		 return MonthG;
 }


 double Eigth()
 {
		 MonthH = (PurchasePrice + ( ( MonthG - ( 0.7 * MonthG ) ) * 0.125 ) ) ;
		 return MonthH;
 }


 double Ninth()
 {
		 MonthI = (PurchasePrice + ( ( MonthH - ( 0.7 * MonthH ) ) * 0.125 ) ) ;
		 return MonthI;
 }


 double Tenth()
 {
		 MonthJ = (PurchasePrice + ( ( MonthI - ( 0.7 * MonthI ) ) * 0.125 ) ) ;
		 return MonthJ;
 }


 double Eleventh()
 {
		 MonthK = (PurchasePrice + ( ( MonthJ - ( 0.7 * MonthJ ) ) * 0.125 ) ) ;
		 return MonthK;
 }


 double Twelveth()
 {
		 MonthL = (PurchasePrice + ( ( MonthK - ( 0.7 * MonthK ) ) * 0.125 ) ) ;
		 return MonthL;
 }

 
