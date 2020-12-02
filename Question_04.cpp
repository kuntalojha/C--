// Good Problem, Everyone should try it.
// Created by KUNTAL OJHA RAJ on 11/30/2020.
//  Write a C++ program to find whether a given year is a leap year or not
#include<iostream>
using namespace std;
int main()
{
    int a;
    cout<<"Enter a years, I will tell you that's  year leapyear or not:"<<endl;
    cin>>a;
    if (a%4==0||a%400==0)
    {
        cout<<"Yours enter years is leapyear."<<endl;
    }
    else
    {
        cout<<"Yours enter years isn't leapyear."<<endl;
    }
    return 0;
}