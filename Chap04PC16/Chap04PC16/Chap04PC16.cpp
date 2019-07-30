
/* Anthony Gomes
   Student ID 234726
   To : Mr Benjamin Garlington
   Computer Science II Assignment
   Running the Race - Chapter 04 PC 16
*/


#include<iostream>
#include<iomanip>
#include<cmath>
using namespace std;

int main() {
    
    float n1, n2, n3;
    
	// Please enter your race times.

	cout << "User 1 : Please enter your time: ";
    cin >> n1;

		
    cout << "User 2 : Please enter your time: ";
    cin >> n2;

	cout << "User 3 : Please enter your time: ";
    cin >> n3;


    if (n1 < n2) {
        if (n1 < n3) {
            cout << "The winner is: " << n1 << " User 1" << endl;
        }
        else {
            cout << "The winner is : " << n3 << " User 3" << endl;
        }
    }
    
    else {
        if (n2 < n3) {
            cout <<"The winner is : " << n2 << " User 2" << endl;
        }
        else {
            cout << "The winner is : " << n3 << " User 3" << endl;
        }
    }

	system("PAUSE");
    return 0;
}