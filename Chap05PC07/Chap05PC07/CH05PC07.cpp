/* Anthony Gomes
   Student ID 234726
   To : Mr Benjamin Garlington
   Computer Science 1 Assignment
   Chapter 05 Programming Challenge #7
   04/05/2015
*/

#include<iostream>
#include<iomanip> 
using namespace std;

int main()
{

//Creating Variables.

	int daysWorked, Days;
    double total;
    double payPerDay;


// Getting Input for number of days worked.

cout << "For how many days will the pay double? (The amount must be at least 1) " << endl;
cin >> daysWorked;

if
	(daysWorked > 1)
{
Days = 1;
payPerDay = 0.01;
total = 0;
cout << setw(3) << "Day" << setw(13) << "Pay Per Day" << endl;
cout << "--------------------------------" << endl;
}

while (daysWorked > 1 && Days <= daysWorked)
{ 
total = total + payPerDay;
cout << setw(3) << Days << setw(13) << "$" << setw(6) << payPerDay << endl;
payPerDay = 2 * payPerDay;
Days++;
}

cout << setw(9) << "Total Pay" << setw(7) << "$" << setw(6) << total << endl;

cout << endl;
system("pause");
return 0;


}
