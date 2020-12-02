// Good Problem, Everyone should try it.
// Created by KUNTAL OJHA RAJ on 11/30/2020.
// Write a C++ program to check whether a given number is positive or negative.
// Website Link :
// https://www.w3resource.com/c-programming-exercises/conditional-statement/index.php
#include<iostream>
using namespace std;
int main()
{
    int a;
    cout<<"Enter a number:"<<endl;
    cin>>a;
    if (a>0)
    {
        cout<<"You enter a positive number."<<endl;
    }
    else
    {
        cout<<"You enter a negative number."<<endl;
    }
    return 0;
}