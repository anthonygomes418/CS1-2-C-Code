#include <iostream>
#include <iomanip>
#include <string>
#include <cmath>
using namespace std;


int main() 
{

    const int empId = 7; 
	int workers[empId] = {5658846, 4520125, 7895122,
						  8777541, 8451277, 1302850,
						  7580489}; 
        int hours[empId]; 
    double payRate[empId];

    \
    cout << "Please enter the hours worked by " << empId
	 << " employees and their\n"
	 << "hourly pay rates.\n";
  for (int index = 0; index < empId; index++)
{
	cout << "Please enter the hours worked by employee number " << (index+1) << " (ID = " << workers[index] << ") : ";
	cin >> hours[index];
	cout << "Please enter the pay rate for employee number "<< (index+1) << " (ID = " << workers[index] << ") : ";
	cin >> payRate[index];

  do
	{
		cout << "Please enter the hours worked by employee number " << (index+1) << " (ID = " << workers[index] << ") : ";
		cin >> hours[index];

		if(hours[index] < 0)
		{
			cout << "Enter in a positive number" << endl; 
		}
	}
	while(hours[index] < 0); 
	
	do
	{
		cout << "Please enter the pay rate for employee number "<< (index+1) << " (ID = " << workers[index] << ") : ";
		cin >> payRate[index];

		if(payRate[index] < 6)
		{
			cout << "The pay rate must be >= 6" << endl; 
		}
	}
	while(hours[index] < 6);

    cout << "This is the gross pay for each employee:\n";
         cout << fixed << showpoint << setprecision(2);

  for (int index = 0; index < empId; index++)
{
	double grossPay = hours[index] * payRate[index];
	cout << "Employee #" << (index + 1);
	cout << ": earned $" << grossPay << endl << endl;
{
  return 0;
}