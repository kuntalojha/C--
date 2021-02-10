// Created by KUNTAL OJHA RAJ on 24/01/2021.
// Question:14
// Write a C++ program to check whether a triangle can be formed by the given value for the angles.
// For help perpase:
// Website Link
// https://www.mathsisfun.com/triangle.html
// Website Link 
// https://www.w3resource.com/c-programming-exercises/conditional-statement
#include<iostream>
using namespace std;
int main()
{
    int side1,side2,side3,total;
    cout<<"Enter first side of triangle:"<<endl;
    cin>>side1;
    cout<<"Enter second side of triangle:"<<endl;
    cin>>side2;
    cout<<"Enter third side of triangle:"<<endl;
    cin>>side3;
    total=side1+side2+side3;
    if (total==180)
    {
        cout<<"Triangle is valid";
    }else
    {
        cout<<"Triangle is nit valid";
    }
    return 0;
}
