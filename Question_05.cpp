// Good Problem, Everyone should try it.
// Created by KUNTAL OJHA RAJ on 11/30/2020.
// Write a C++ program to read the age of a candidate and determine 
// whether it is eligible for casting his/her own vote.
#include<iostream>
using namespace std;
int main()
{
    int age;
    cout<<"Enter your age:"<<endl;
    cin>>age;
    if (age>17)
    {
        cout<<"He/She is eligible for castiong his/her own vote."<<endl;
    }
    else
    {
        cout<<"He/She isn't eligible for casting his/her own vote."<<endl;
    }
    return 0;
}