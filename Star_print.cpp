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
    cin>>n; // number of line.
    for(int i=1;i<=n;i++)
    {
    	// print spaces
    	for (int spaces = 1; spaces<=n-i; spaces ++)
    	{
    		cout<<" ";
    	}
        // print star 
    	for (int star = 1; star <= 2*i-1; star++)
    	{   
    		cout<<"*";
    	}
    	cout<<endl;
    }
    return 0;
}