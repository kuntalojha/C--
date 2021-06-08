#include<iostream>
using namespace std;
int main()
{
    int Array[6]={10,20,30,40,50,60};
    cout<<"First Way To Traverse the Array"<<endl;
    for (int i = 0; i < 6; i++)
    {
        cout<<Array[i]<<" ";
    }
    cout<<"\n";
     cout<<"Second Way To Traverse the Array"<<endl;
    for (int i = 0; i < 6; i++)
    {
        cout<<i[Array]<<" ";
    }    
    cout<<endl;
    return 0;
}
