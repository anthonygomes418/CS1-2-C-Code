/* Anthony Gomes
   Student ID 234726
   To : Mr Benjamin Garlington
   Computer Science 1 Assignment
   Chapter 03 Programming Challenge #21
*/

#include<iostream>
#include<iomanip>

using namespace std;

int main()
{
 double diameter, radius, slices, area, totalPizzas;
 double const PI = 3.14159;
 int numberOfPeople;

 cout << "How many people will attend the party: ";
 cin >> numberOfPeople;
 cout << "Enter the diameter of the pizza (inches): ";
 cin >> diameter;

 radius = diameter/2;
 area = PI * radius * radius;
 slices = area/14.125;
 totalPizzas = (numberOfPeople * 4) / slices;

 cout << "\n-----------------------------\n";
 cout << setprecision(1) << fixed;
 cout << "You will need to order: " << totalPizzas << " pizzas\n\n";

 system("pause");

 return 0;
}