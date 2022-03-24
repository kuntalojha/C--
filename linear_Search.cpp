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
    int array[]={1,3,68,0,34,4,2,8,10,9,5,78,45,7};
    int key=9;
    int len= sizeof(array)/sizeof(int);
    for(int i=0;i<len;i++)
    {
        if(array[i]==9)
        {
            cout<<i+1;break;
        }
    }
    return 0;
}