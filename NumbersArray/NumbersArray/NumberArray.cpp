#include<iostream>

using namespace std;

int main()

{

	const int SIZE = 3; 
    int numbers[SIZE], high, low, average, count, index, total = 0;
	int lowest, highest;
    
	for (index = 0; index < 3; index++ )
    {
     cout << "Enter number " << ( index + 1) << ":" ;
     cin >> numbers[SIZE];
    }

	highest = numbers[0];
	for ( count = 1; count < SIZE; count++)
	{
		if ( numbers[count] > highest)
			highest = numbers[count];
	}
	
	cout <<"The highest number is :"<< numbers[count];

	lowest = numbers[0];
	for ( count = 1; count < SIZE; count++)
	{
		if ( numbers[count] < lowest)
			lowest = numbers[count];
	}
	
	cout <<"The lowest number is :"<< numbers[count];

/*cout << " The numbers are " << endl;
for (index = 0; index < 20; index++ )
cout << " " <<numbers[SIZE] << endl; 
*/



system("PAUSE");
return 0;
}
/*
for (index = 0 to SIZE = -1)
{
total = total + numbers[index]
}

if (high < numbers[index])
high = numbers[index]

if (low > numbers[index]
low = numbers[index]
*/
