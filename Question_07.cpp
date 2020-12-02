// Created by KUNTAL OJHA RAJ on 11/30/2020.
// Write a C++ program to accept the height of a person in 
// centimeter and categorize the person according to their height.
// Website Link :
// https://www.w3resource.com/c-programming-exercises/conditional-statement/index.php
#include<iostream>
using namespace std;
int main()
{
    int height;
    cout<<"Enter a perosn height:"<<endl;
    cin>>height;
    if(height>=165)
    {
        cout<<"The person height is Tall."<<endl;
    }
    else
    {
     if (height<=150)
      { if (height==150)
        {
          cout<<"The person height is Average."<<endl;
        }
      } else   
        cout<<"The person height is Dwarf."<<endl;
    }
    return 0;  
}