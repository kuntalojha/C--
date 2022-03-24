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
    int N;
	cin>>N;
	int ans = 0; 
	//Loop
	while(N>0)
	{
    int last_digit = N%10;
    ans = ans*10 + last_digit;
    N = N / 10;
    cout<<ans;
	}
    return 0;
}