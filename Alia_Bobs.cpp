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
    int n,alice=0,bob=0;
    cin>>n;
    while(n--)
    {
    	int a,b;
    	cin>>a>>b;
    	alice=a+alice;
    	bob=b+bob;
    }
    cout<<alice-bob;
    int a;
    cout<<a<<endl;
    return 0;
}