// Created by KUNTAL OJHA on 31/07/2021.
// Convart Degree to Fahrenheit
#include<iostream>
using namespace std;
int main()
{
    int ftemp;  // for temperature in fahrenheit
    cout << "Enter tmperature in fahrenheit: ";
    cin >> ftemp;
    int ctemp = (ftemp-32) * 5/9;
    cout << "Eqquivalent in Celsiuse is: " << ctemp << "\n";
    return 0;
}