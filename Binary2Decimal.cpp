#include<bits/stdc++.h>
using namespace std;

int binary2Decimal(int N)
{
	int p=1,ans=0;
	for(int i=N;i>0;i=i/10)
	{
		int last_digit=i%10;
		ans=(last_digit*p)+ans;
		p=p*2;
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
    cout<<binary2decimal(c);

    return 0;
}