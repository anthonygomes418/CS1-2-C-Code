/* Anthony Gomes
   Student ID 234726
   To : Mr Benjamin Garlington
   Computer Science 1 Assignment
   Chapter 03 Programming Challenge #29
   03/02/2014
*/

// This program uses user's data input to create a  sy.
#include <iostream>
#include<iomanip>
#include<string>
using namespace std;

int main()
{
	//Setting up the Variables.
	string name,age,city,college,profession,animal,pet;
	
	//Gathering data from the user.
	// User's Name.
	cout<< "What is your name?"<<endl;
    getline(cin, name);

	//User's Age.
	cout<< "How old are you?"<<endl;
	cin>> age;
	cin.ignore();

	//User's city of residence.
	cout<<"Please state your city?"<<endl;
	getline(cin, city);

	//User's College.
	cout<< "Please state your college?"<<endl;
	getline(cin, college);

	//User's Profession.
	cout<< "Please state your profession?"<<endl;
	getline(cin, profession);

	//User's Pet.
	cout<< "Please state your pet?"<<endl;
	getline(cin, animal);

	//Name of User's pet.
	cout<< "What is the name of your pet?"<<endl;
	getline(cin, pet);

	//Story for the user using data provided.
	cout<< "There was once a person named" <<setw(2)<<name<<setw(2)<<"who lived in"<<setw(2)<<city<<endl;
	cout<<"At the age of"<<setw(2)<<age<<setw(3)<<name<<setw(3)<<"went to college at"<<setw(2)<<college<< endl;
	cout<<name<<setw(2)<<"graduated and went to work as a"<<setw(2)<<profession<<endl;
	cout<<"Then,"<<name<<setw(2)<<"adopted a"<<animal<<setw(2)<<"named"<<setw(2)<<pet<<endl;
	cout<<"They both lived hapily ever after."<<endl;
	system ("pause");
	return 0;


}