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
    const unsigned char WHITE =219;
    const unsigned char GRAY =176;
    unsigned char ch;
    int i=0;
    for ( i = 0; i < 80*25-1; ++i)
    {
    	ch =WHITE;
    }

    for (int j = 0; j < i; ++j)
    {
    	if(i%j==0)
    	{
    		ch =GRAY;
    		break;
    	}
    	cout<<ch;
    }
    return 0;
}