#include<bits/stdc++.h>
using namespace std;

int factorial(int n)
{
	int ans=1;
	for(int i=1;i<=n;++i)
    {
    	ans=i*ans;
    }
    return ans;
}
int main()
{
/**********************************************/  
    #ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    #endif
/*******************************************/
    int c;
    cin>>c;
    cout<<"Factorial of "<<c<<" is "<<factorial(c);
    return 0;
}