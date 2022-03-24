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
    int number,sum=0;
    cin>>number;
    while(number)
    {
    	sum=(number%10)+sum;
    	number=number/10;
    }
    cout<<sum;
    return 0;
}