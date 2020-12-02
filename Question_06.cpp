// Good Problem, Everyone should try it.
// Created by KUNTAL OJHA RAJ on 11/30/2020.
// Write a C++ program to read the value of an integer m and display the value 
// of n is 1 when m is larger than 0, 0 when m is 0 and -1 when m is less than 0
// Website Link :
// https://www.w3resource.com/c-programming-exercises/conditional-statement/index.php
#include<iostream>
using namespace std;
int main()
{
    int m,n;
    cout<<"Enter the value of M:"<<endl;
    cin>>m;
    if (m>0)
    {
        cout<<"Value of N is 1"<<endl;
    }
    else if(m==0)
    {
        cout<<"Value of N is 0"<<endl;
    }
    else
    {
        cout<<"Value of N is -1"<<endl;
    }
    return 0;
}