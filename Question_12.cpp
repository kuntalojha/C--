// Created by KUNTAL OJHA RAJ on 12/01/2020.
// Write a C++ program to read roll no, name and marks of three
// subjects and calculate the total, percentage and division
// 1st division>80,2nd division 80-70,3rd division 69-50,Fass Marks<50
// Website Link :
// https://www.w3resource.com/c-programming-exercises/conditional-statement/index.php
/*
-----------------Demo Input----------------
Test Data :
Input the Roll Number of the student :784
Input the Name of the Student :James
Input the marks of Physics, Chemistry and Computer Application : 70 80 90
-----------------Demo Output----------------
Roll No : 784
Name of Student : James
Marks in Physics : 70
Marks in Chemistry : 80
Marks in Computer Application : 90
Total Marks = 240
Percentage = 80.00
Division = First
*/
#include<iostream>
using namespace std;
int main()
{
    int physics,chemistry,computer_Application;
    int roll_number,total_marks;
    float percentage_marks;
    string name;
    cout<<"Enter Your Name:"<<endl;
    getline(cin,name);
    cout<<"Enter your Roll Number:"<<endl;
    cin>>roll_number;
    cout<<"Enter your physics marks:"<<endl;
    cin>>physics;
    cout<<"Enter your chemistry marks:"<<endl;
    cin>>chemistry;
    cout<<"Enter your computer Application marks:"<<endl;
    cin>>computer_Application;
    total_marks=physics+chemistry+computer_Application;
    percentage_marks=total_marks/3;
    cout<<"Your name is: "<<name<<endl<<endl;
    cout<<"Your Roll Number is: "<<roll_number<<endl<<endl;
    cout<<name<<" your marks in Physics:"<<physics<<endl<<endl;
    cout<<name<<" your marks in Chemistry:"<<chemistry<<endl<<endl;
    cout<<name<<" your marks in Computer Application:"<<computer_Application<<endl<<endl;
    cout<<name<<" your total marks:"<<total_marks<<endl<<endl;
    cout<<name<<" your percentage marks:"<<percentage_marks<<endl<<endl;
    if (total_marks>80)
    {
        cout<<name<<" you got first Division."<<endl<<endl;
    }else if(total_marks>=70 && total_marks<=80)
    {
        cout<<name<<" you got second Division."<<endl<<endl;
    }else if(total_marks<70 && total_marks>=50)
    {
        cout<<name<<" you got third Division."<<endl<<endl;
    }else
    {
        cout<<name<<" you got Fass Marks."<<endl<<endl;
    }  
    return 0;
}