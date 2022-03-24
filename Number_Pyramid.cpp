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
    int n;
    cin>>n;
    for(int i=1;i<=n;i++)
    {
    	for(int j=n-1;j<=n;j--)
    	{
    		cout<<" ";
    	}
    	for(int k=i; k<=i*2-1;k++)
    	{
    		cout<<k;
    	}
    	for(int k=i; k<=i*2-1;k++)
    	{
    		cout<<k;
    	}
    }
    return 0;
}