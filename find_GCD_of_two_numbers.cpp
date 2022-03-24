#include<bits/stdc++.h>
using namespace std;

int main()
{
	/**********************************************/	
	#ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    #endif
/*********************************************/
    int first_number,secound_number,max_number,GCD=0,count=1;
    cin>>first_number>>secound_number;
    max_number=max(first_number,secound_number);
    while(count<=max_number)
    {
    	if(first_number%count==0 && secound_number%count==0)
    	{
    		GCD=count;
    	}
    	count++;
    }
    cout<<GCD<<endl;
    return 0;
}