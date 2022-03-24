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
    int x,b=1;
    cin>>x;
    for (int i = 1; i <=x; ++i)
    {
    	b=b*i;
    }
    cout<<"Fctororial of "<<x<<" is "<<b;
    return 0;
}