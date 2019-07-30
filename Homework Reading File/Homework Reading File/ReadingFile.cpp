/* Anthony Gomes
   Student ID 234726
   To : Mr Benjamin Garlington
   Computer Science II Assignment
   Assignment on File Manipulation - Program 2
*/

// This program reads numbers from a file.
 #include <iostream>
 #include <fstream>
 using namespace std;

 int main() 
 {
	 ifstream inFile;
     int value1, value2, value3, value4, value5, sum;

     // Open the file.
	  
	 inFile.open("Numbers.txt");

     // Read the three numbers from the file.
     inFile >> value1;
     inFile >> value2;
     inFile >> value3;
	 inFile >> value4;
	 inFile >> value5;

     // Close the file.
     inFile.close();

     // Calculate the sum of the numbers.
     sum = value1 + value2 + value3 + value4 + value5;

     // Display the three numbers.
     cout << "Here are the numbers:\n"<< value1 << " " << value2 << " " << value3 <<" " << value4 << " " << value5<<" " << endl;

	 // Display the sum of the numbers.
     cout << "Their sum is: " << sum << endl;
     
	 system("PAUSE");
	 return 0;
 }