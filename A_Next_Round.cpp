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
    int n,k;
    cin>>n>>k;
    int count =0;
    while(n--)
    {
    	int i=0;
    	cin>>i;
    	if(i>k)
    	{
    		count++;
    	}
    }
    cout<<count;
    return 0;
}