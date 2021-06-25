#include<iostream>
using namespace std;
int main()
{
    int Array[5]={2,4,6,8,10};
    int *p;
    p=Array;
    for (int  i = 0; i < 5; i++)
    {
        cout << Array[i] << endl;
    }
    cout << endl;
     for (int  i = 0; i < 5; i++)
    {
        cout << p[i] << endl;
    }
    return 0;
}