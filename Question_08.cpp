// Created by KUNTAL OJHA RAJ on 11/30/2020.
// Write a C program to find the largest of three numbers
//
#include<iostream>
using namespace std;
int main()
{
    int a,b,c;
    cout<<"Enter 1st number:"<<endl;
    cin>>a;
    cout<<"Enter 2nd number:"<<endl;
    cin>>b;
    cout<<"Enter 3rd number:"<<endl;
    cin>>c;
    if (a>b && a>c)
    {
        cout<<"Your enter 1st number is largest then 2nd and 3rd."<<endl;
    }
    else if (b>a && b>c)
    {
        cout<<"Your enter 2nd number is largest then 1st and 3rd."<<endl;
    }else
    {
        cout<<"Your enter 3re number is largest then 1st and 2nd."<<endl;
    }
    return 0;    
}