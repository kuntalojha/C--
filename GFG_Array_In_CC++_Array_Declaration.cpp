// Array Link: https://www.geeksforgeeks.org/arrays-in-c-cpp/
// Created by kuntal on 15-05-2021.
#include <iostream>
using namespace std;
int main()
{
    int arr[5];
    arr[0] = 5;
    arr[2] = -10;
 
    // this is same as arr[1] = 2
    arr[3 / 2] = 2;
    arr[3] = arr[0];
 
    cout <<"\n" <<  arr[0] << " " << arr[1] << " " << arr[2] << " " << arr[3] ;
 
    return 0;
}

