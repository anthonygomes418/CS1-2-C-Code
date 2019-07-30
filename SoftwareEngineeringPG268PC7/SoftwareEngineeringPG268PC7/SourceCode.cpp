/*
7. The Jumpin’ Jive coffee shop charges $2.00 for a cup of coffee and offers the add-ins shown in Table 6-3.
Design the logic for an application that allows a user to enter ordered add-ins conti- nuously until a sentinel value is entered. After each item, 
display its price or the message Sorry,we do not carry that as output. After all items have been entered, display the total price for the order.

Product         Price ($)
Whipped cream       0.89 
Cinnamon            0.25 
Chocolate sauce     0.59
Amaretto            1.50
Irish whiskey       1.75

*/

#include <iostream>
#include <cstdlib>
using namespace std;
int main()
{

     const int SIZE = 5;
     double COFFEEPRICE = 2.00;
     string products[SIZE]= {"Whipped cream", "Cinnamon", "Chocolate sauce", "Amaretto", "Irish whiskey"};
     double prices[SIZE]={0.89, 0.25, 0.59, 1.50, 1.75};
     double totalPrice = 0;
     int choice = 0;
     int  SENTINEL = -1;

    do
    {
        cout << "Please select an item from the Product menu by selecting the item number (1 - 5)  or -1 to terminate: " ;
        cout << "Product           Price ($)" << endl;
        cout << "=======           =========" << endl;
        cout << "1. Whipped cream     0.89" << endl;
        cout << "2. Cinnamon          0.25" << endl;
        cout << "3. Chocolate sauce   0.59" << endl;
        cout << "4. Amaretto          1.50" << endl;
        cout << "5. Irish whiskey     1.75" << endl;
        cout << "Please enter a positive number: " << endl;
        cin >> choice;


        if (choice > SENTINEL) 
        {
            if ((choice >= 1) && (choice <= 5))
            {
                totalPrice = totalPrice + prices[choice-1]; 
            }
            else
            {
                cout << "Item number ",choice, " is not valid", "Sorry we do not carry that item" ;
            }
        }

    totalPrice = totalPrice + COFFEEPRICE;
    cout << "Total price of order is $" << totalPrice << endl;
    cout << "Thanks for purchasing from Jumpin Jive Coffee Shop" << endl;

    }
	while (choice <= SENTINEL);

	
	system("pause");
	return 0;
}
