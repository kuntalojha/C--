// Created by KUNTAL OJHA RAJ on 12/01/2020.
// Write a C++ program to find the eligibility of admission 
// for a professional course based on the following criteria.
// Eligibility Criteria : 
// Marks in Maths >=65 and Marks in Phy >=55 and Marks in Chem>=50
// Total in all three subject >=190 or Total in Maths and Physics >=140 
/* 
 -----------------Demo Input----------------
 Input the marks obtained in Mathematics :72
 Input the marks obtained in Physics :65 
 Input the marks obtained in Chemistry :51
 Total marks of Maths, Physics and Chemistry :188 
 Total marks of Maths and Physics : 137 
 The candidate is not eligible.
*/
// Website Link :
// https://www.w3resource.com/c-programming-exercises/conditional-statement/index.php
#include<iostream>
using namespace std;
int main()
{
    int m,p,c,t,mpt;
    cout<<"Enter marks in Maths:"<<endl;
    cin>>m;
    cout<<"Enter marks in Physics:"<<endl;
    cin>>p;
    cout<<"Enter marks in Chemistry:"<<endl;
    cin>>c;
    t=m+p+c;
    mpt=m+p;
    if (m>=65 && p>=55 && c>=50 && t>=190 && mpt>=140 )
    {
        cout<<"The candidate is Eligible."<<endl;
    }
    else
    {
         cout<<"The candidate is not Eligible."<<endl;
    }
    return 0;
}