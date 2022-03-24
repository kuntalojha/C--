#include <bits/stdc++.h>
using namespace std;

int main() 
{
/**********************************************/	
	#ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    #endif
/*********************************************/
	// your code goes here
	int n;
	cin>>n;
	int i=2;
	while(i<n)
	{
		if(n%i==0)
		{
			cout<<"NOT A PRIME NUMBER"<<endl;
			exit(0);
		}
		i++;
	}
	cout<<"PRIME NUMBER"<<endl;
	return 0;
}