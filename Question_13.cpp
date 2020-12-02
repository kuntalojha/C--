// Created by KUNTAL OJHA RAJ on 12/01/2020.
// Write a C program to read temperature in centigrade and display a 
// suitable message according to temperature state.
// Website Link :
// https://www.w3resource.com/c-programming-exercises/conditional-statement/index.php
/*
Temp < 0 then Freezing weather
Temp 0-10 then Very Cold weather
Temp 11-20 then Cold weather
Temp 21-30 then Normal in Temp
Temp 31-40 then Its Hot
Temp >=41 then Its Very Hot
-----------------Demo Input----------------
Test Data :
42
-----------------Demo Output----------------
Expected Output :
Its very hot.
*/
#include<iostream>
using namespace std;
int main()
{
    int Temperature;
    cout<<"Please enter the temperature:"<<endl;
    cin>>Temperature;
    if (Temperature<0)
    {
        cout<<"Now The weather is Freezing."<<endl;
    } else if (Temperature<=10)
    {
        cout<<"Now the wether is very cold."<<endl;
    }else if(Temperature<=20)
    {
        cout<<"Now the wether is cold."<<endl;
    }else if(Temperature>=30)
    {
        cout<<"Now the wether is normal."<<endl;
    }else if (Temperature>40)
    {
        cout<<"Now the wether is very hot"<<endl;
    }
    return 0;
}