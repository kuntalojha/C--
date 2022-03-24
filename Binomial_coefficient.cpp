#include<bits/stdc++.h>
using namespace std;

int factorial(int n)
{
	int ans=1;
	for(int i=1;i<=n;i++)
	{
		ans=ans*i;
	}
	return ans;
}
int binomialCoefficient(int a,int b)
{
	int Binomial_Coefficient=0;
	Binomial_Coefficient=factorial(a)/(factorial(a-b)*factorial(b));
	return Binomial_Coefficient;
}
int main()
{
/**********************************************  
    #ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    #endif
/*******************************************/
 	int p,q;
 	cin>>p>>q;
 	cout<<binomialCoefficient(p,q);

    return 0;
}