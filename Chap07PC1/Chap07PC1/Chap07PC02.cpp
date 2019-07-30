 #include <iostream>
#include <string>
using namespace std;

string maxRain (double arr[], string months[], int n);
string minRain (double arr[], string months[], int n);
double totRain(double arr[],int n);
double avgRain(double arr[],int n);

int main ()
{
    double totRainfall=0.0;
    double avgRainfall=0.0;
    string minRainfallMonth;
    string maxRainfallMonth;

    

    const int n=12;
    string months[n]={"January","February","March", "April","May", "June","July","August","September","October","November","December"};
    double totals[n];

    for (int i=0;i<n; i++)
    {
        
        cout << "Enter rainfall for " << months[i]  << ": ";
        cin >> totals[i];

        if (totals[i] <0 )
        {
            cout << "invalid data (negative rainfall) -- retry";
            cout << "Enter rainfall for " << months[i] << ": ";
            cin >> totals[i];
        }


    }

        maxRainfallMonth= maxRain(totals, months, n);
        minRainfallMonth= minRain(totals, months, n);
        totRainfall = totRain(totals, n);
        avgRainfall = avgRain(totals, n);

    cout << "Total rainfall: " << totRainfall;
    cout << "\nAverage rainfall: " << avgRainfall;
    cout << "\nLeast rainfall in: " << minRainfallMonth;
    cout << "\nMost rainfall in: " << maxRainfallMonth;
    
    //cout << "\n\n";
    //system("pause");
}

double avgRain(double arr[],int n)
{
    double tot=0.0;
    for (int i=0; i<n; i++)
        tot+=arr[i];

    return tot/n;
}

double totRain(double arr[],int n)
{
    double tot=0.0;
    for (int i=0; i<n; i++)
        tot+=arr[i];

    return tot;
}


string maxRain(double arr[], string months[], int n)
{
    double max=arr[0];
    int idx=0;
    for (int i=0; i<n; i++)
        if (arr[i]>max)
        {
                max=arr[i];
                idx=i;
        }

    return months[idx];
}


string minRain(double arr[], string months[], int n)
{
    double min=arr[0];
    int idx=0;
    for (int i=0; i<n; i++)
        if (arr[i]<min)
        {
                min=arr[i];
                idx=i;
        }

    return months[idx];
}
