/* Anthony Gomes
   Student ID 234726
   To : Mr Benjamin Garlington
   Computer Science 1 Assignment
   Chapter 03 Programming Challenge #17
   03/20/2014
*/

// This program uses two variables to compare and find the answers.
#include <iostream>
#include<string>
#include<iomanip>
#include<cmath>
using namespace std;

int main()
{
    int num1, num2, result, studentanswer;

    // Obtain input for the first number.
    cout << " Enter the first number ";
    cin >> num1;

   // Obtain input for the amount of gasoline used.
   cout << " Enter a value for the second number ";
   cin >> num2;

   // Calculate the result.
   result = num1 + num2;
    
   
   // Get the student's answer.
   cout<< "Please enter your answer"<<endl;
   cin >> studentanswer;


    // Display the results and student's answer.
    if (result == studentanswer)
		cout<<" Well done! Your answer is correct.";
	else
	    cout<<" Your answer is incorrect. Please review your steps";
    system ("pause");
    return 0;
}
