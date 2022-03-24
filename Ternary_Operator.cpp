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
    int c;
    cin>>c;
    c%2 == 0 ? cout<<"Even"<<endl : cout<<"Odd"<<endl;
    string weather = c >25 ? "Hot" : "Coll";
    cout<<weather;
    return 0;
}