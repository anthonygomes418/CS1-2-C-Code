#include<iostream>
#include<iomanip>
#include<cstdlib>
using namespace std;

int main ()
{
	double StartPopulation, RateIncrease, DailyPopulation;
	int Days, ToDay;

	cout << " Please enter the starting number of organisms."<<endl;
	cin >> StartPopulation;

	while (StartPopulation < 2)
	{ 
		cout <<" The Starting Population cannot be less than 2" << endl;
		cin >> StartPopulation;
	}

	cout << "Please enter the number of days the population of organisms will multiply" << endl;
	cin >> Days;
	
	while (Days < 1)
	{ 
		cout <<" The Number of Days cannot be less than 1" << endl;
		cin >> StartPopulation;
	}

	cout <<"Please enter the rate of increase of the population" << endl;
    cin >> RateIncrease;
	
	while (RateIncrease < 0)
	{ 
		cout <<" The Rate of Increase cannot be negative" << endl;
		cin >> RateIncrease;
	}

	for (ToDay = 1; ToDay == Days; ToDay++ )
	{
		// calculate increase
		DailyPopulation = ((RateIncrease / 100) * StartPopulation) + StartPopulation;

		// Display Output
		cout << "Population for the day " << ToDay <<" is " << DailyPopulation << endl;
		

	}

	system("PAUSE");
	return 0;
}