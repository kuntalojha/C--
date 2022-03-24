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
    // your code goes here
    int t;
    cin>>t;
    while(t--)
    {
        string s;
        cin>>s;
        int len=s.length();
        if(len>10)
        {
          cout<<s[0]<<len-2<<s[len-1]<<endl;
        }else
        {
            cout<<s<<endl;
        }
    }
    return 0;
}