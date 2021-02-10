// Created by KUNTAL OJHA RAJ on 12/01/2020.
// Question:14
// Write a C++ program to check whether a triangle is Equilateral, Isosceles or Scalene
// For help perpase:
// Website Link
// https://www.mathsisfun.com/triangle.html
// Website Link 
// https://www.w3resource.com/c-programming-exercises/conditional-statement
#include<iostream>
using namespace std;
int main()
{
    int side1,side2,side3,Total;
    cout<<"Enter Triangle side 1:"<<endl<<"Enter Triangle side 2:"<<endl<<"Enter Triangle side 3:"<<endl;
    cin>>side1>>side2>>side3;
    if((side1+side2+side3>180)||(side1+side2+side3<180))
    {
        cout<<"This is not a traiangle."<<endl;
    }else if (side1==side2 && side2==side3)
    {
        /* code */
        cout<<"The triangle is Equialateral.";
    } else if ((side1==side3) || (side1=side2) || (side3==side2))
    {
        cout<<"The triangle is Isosceles.";
    }else
    {
        cout<<"The triangle is Scalene.";
    }
    
    return 0;
}
/*
90
30
60 Then it's given error.
*/