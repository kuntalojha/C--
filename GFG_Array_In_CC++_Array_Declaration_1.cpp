// Array Link: https://www.geeksforgeeks.org/arrays-in-c-cpp/
// Created by kuntal on 15-05-2021.
// This C++ program compiles fine
// as index out of bound 
#include <iostream>
using namespace std;
int main()
{
    int arr[2];
    cout << arr[3] << " ";
    cout << arr[-2] << " ";
    return 0;
}