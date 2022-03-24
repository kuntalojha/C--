#include<bits/stdc++.h>
using namespace std;

int linear_Search( int array[],int n,int key)
{
    for(int i=0;i<n;i++)
    {
        if(array[i]==key)
        {
            return i;
        }
    }
    return -1;
}

int main()
{
    
/**********************************************/    
    #ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    #endif
/*********************************************/
    int c;
    int array[]={1,3,68,0,34,4,2,8,10,9,5,78,45,7};
    int len= sizeof(array)/sizeof(int);
    int key=9;
    // cin>>key;
    int index= linear_Search(array,len,key);

    if(index!=-1)
    {
        cout<<key<<" is present at index "<<index<<endl;
    }else
    {
        cout<<key<<" is NOT Found!"<<endl;
    }

    return 0;
}