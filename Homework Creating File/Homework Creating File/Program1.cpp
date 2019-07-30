 
/* Anthony Gomes
   Student ID 234726
   To : Mr Benjamin Garlington
   Computer Science II Assignment
   Assignment on File Manipulation - Program 1
*/

// This program writes user input to a file.
 #include <iostream>
 #include <fstream>
 using namespace std;

 int main() 
 {
 
	 ofstream outputFile;
     float num1, num2, num3, num4, num5;

     // Open an output file.
     outputFile.open("Numbers.txt");
 
	 // Get the numbers from the user.
     cout << "Enter any five numbers when prompted ." << endl;
     cout << "Number 1: " << endl;
     cin >> num1;
     cout << "Number 2: " << endl;
     cin >> num2;
     cout << "Number 3: " << endl;
     cin >> num3;
	 cout << "Number 4: " << endl;
     cin >> num4;
	 cout << "Number 5: " << endl;
     cin >> num5;

// Write the names to the file.
  outputFile << num1 << endl;
  outputFile << num2 << endl;
  outputFile << num3 << endl;
  outputFile << num4 << endl;
  outputFile << num5 << endl;

  // Confirmation to the User.
  cout << "The names were saved to a file.\n";

 // Close the file
  outputFile.close();

  system("PAUSE");
  return 0;
 }