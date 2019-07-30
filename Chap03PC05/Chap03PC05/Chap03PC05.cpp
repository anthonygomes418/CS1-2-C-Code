#include<iostream>
#include<iomanip>
using namespace std;

int main ()
{
	double MaleStudents, FemaleStudents ,Total, PercentileMale, PercentileFemale;

	cout << " Please enter the number of male students." << endl;
	cin >> MaleStudents;
	cout << " Please enter the number of female students." << endl;
	cin >> FemaleStudents;

	Total = MaleStudents + FemaleStudents;

	PercentileMale = (MaleStudents / Total) * 100;
	PercentileFemale = (FemaleStudents / Total) * 100;

	cout << "The total number of students was "<< Total << endl;
	cout << "The percentage of male students was "<<setprecision(3) << fixed << PercentileMale << "%" << endl;
	cout << "The percentage of female students was "<<setprecision(3) << fixed << PercentileFemale << "%" << endl;

	system("PAUSE");
	return 0;

}