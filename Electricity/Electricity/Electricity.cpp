#include<iostream>
#include<fstream>
#include<string>

using namespace std;


int x = 0;
double number;  
double kwused;	
ifstream  text; //file will be used to reference text.txt
double price;

void Calculation () ;

int main()
{

	

	text.open ("text.txt");

	
	if(text.is_open()) {
		
	  for (x=0; x<7; x++) {
		
		  
		  text >> number >> kwused; 

          cout<< number<<"|" << kwused << "|"<<endl;
		
		}
	  void Calculation();
	  cout << price;
	  
	}
	  system("PAUSE");
	  return 0;
} 



void Calculation ()
{
	

		if( kwused < 300) 
		{
			price = kwused * 0.09;
			cout << price;
		}
		
		else if ( kwused < 600 ) 
		{
			price = (.09 * 300) + ((kwused - 300)*0.08);
			cout << price;
		}

        else if ( kwused < 1000 )
		{

			price = (0.09 * 300) + (300*0.08)  + ((kwused - 600)*0.08) ;
			cout << price;
		}
		 
		else 
		{
			price = (0.09 * 300) + (300*0.08)  + (400*0.08)  + ((kwused - 1000) * 0.05);
			cout << price;
	
		}
	}

