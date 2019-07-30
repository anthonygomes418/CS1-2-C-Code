// Energy Drink Consumption
#include<iostream>
using namespace std;

int main ()
{
	int NoSurveyed;
	double OneorMore, CitrusFlavoured;

	NoSurveyed = 16500;
	OneorMore = NoSurveyed * 0.15;
	CitrusFlavoured = NoSurveyed * 0.58;

	cout << " The number of people who purchased one or more drinks per week is " << OneorMore << endl;
	cout << " The number of people who prefer citrus flavoured drinks is " << CitrusFlavoured << endl;

	system("PAUSE");
	return 0;
}