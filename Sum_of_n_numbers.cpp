#include<bits/stdc++.h>
using namespace std;

int main()
{
/**********************************************/  
    #ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    #endif
/*******************************************/
     int t,sum=0;
     cin>>t;
     while(t--)
     {
     	int number=0;
     	cin>>number;
     	sum=sum+number;
     }
     cout<<"Number "<<sum;
    return 0;
}