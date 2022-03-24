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
    int t,count=0;
    cin>>t;
    while(t--)
    {
    	string c;
    	cin>>c;
    	if(c=="++X")
    	{
    		count++;
    	}else if(c=="--X")
    	{
    		count--;
    	}
    }
    cout<<count;
    return 0;
}