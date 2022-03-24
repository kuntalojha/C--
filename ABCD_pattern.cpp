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

    int n;
    cin>>n;
    for (int i=1;i<n;++i)
    {
        char letter='A';
        for (int cnt=1;cnt<n-i+1;cnt++)
        {
            // letters n-1+1 
            cout<<letter;
            letter++;
        }
        letter=letter-1;
        for (int cnt=1;cnt<n-i+1;cnt++)
        {
            cout<<letter;
            letter--;
        }
        cout<<endl;
    }
    return 0;
}