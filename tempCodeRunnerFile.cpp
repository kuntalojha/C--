#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--)
	{
		int k=0,count=0;
		string name;
		cin>>name;
		k=name.size();
		for(int i=0;i<=k-1;i++)
		{
			if((name[i]=='a')||(name[i]== 'e') || (name[i]== 'i') || (name[i]=='o') ||(name[i]== 'u') )
			{
				count++;
			}
		}
		cout<<count<<endl;
	}
	return 0;
}