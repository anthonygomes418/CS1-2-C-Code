/* FRom : 
Anthony Gomes
Student ID: 234727
Data Structures

To: Zohreh Howard

Date: 04/14/2016
*/



#include<iostream>
using namespace std;


int menu();
void toBinary();
void toOctal();
void toHex();

int main()
{
int choice = menu();

switch(choice)

{

case (1): 
toBinary();
break;
case (2):
toOctal();
break;
case(3):
toHex();
break;
}
return 0;
}
int menu()
{
int choice;
cout << "(>^.^)>==(_)Menu(_)==<(^.^<)" << endl;
cout << "Convert the number  into: " << endl;
cout << "1 Binary" << endl;
cout << "2 Octal" << endl;
cout << "3 Hexadecimal" << endl;
cin >> choice;
return choice;
}

void toBinary()
{
int num;
int total = 0; 
cout << "Please enter a decimal: ";
cin >> num;
if(num==1)

{
cout<<"\nMAJOR ERROR USE A NUMBER!!!!!";
}
else 
while(num > 0)
{ 
total = num % 2; 
num /= 2; 
cout << total << " ";
} 
}

void toOctal()
{
int num;
int total = 0; 
cout << "Please enter a decimal: ";
cin >> num;
if(num==1)
{
cout<<"\nMAJOR ERROR USE A NUMBER!!!!!";
}
else 
while(num > 0)
{ 
total = num % 8; 
num /= 8; 
cout << total << " ";
} 

}
void toHex()
{

int num,counter,x,a,hex[100];
cout<<"Please enter a decimal: ";
cin>>num;
cout<<"\nThe Decimal number "<<num<<" converts to the Hexadecimal number: ";
for(counter=0;num!=0;counter++)
{
a=num%16;
hex[counter]=a;
num=num/16;
}
for(x=counter-1;x>=0;x--)
{
if (hex[x] > 9)
cout << char('A'+hex[x]-10);
else
cout << hex[x];
}
cout << endl;
}
