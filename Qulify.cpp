#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	/**********************************************/  
    #ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    #endif
/*******************************************/
	int t;
	cin>>t;
	while(t--)
	{
	    int x,a,b;
	    cin>>x>>a>>b;
	    if((a+(b*2))>=x)
	    {
	        cout<<"Qualify"<<endl;
	    }else
	    {
	    	cout<<"NotQualify"<<endl;
	    }
	}
	return 0;
}
