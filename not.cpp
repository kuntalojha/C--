#include <bits/stdc++.h>
using namespace std;

int main()
{
	/* code */
	int i=0;
	cout<<(~i)<<endl;
	int a=5;
	/*
		<< opreator called left shift operator
		if value a<<b it's mens a*2^b
		Here a=5, b=3
		So, the answer is 5<<3 mens 5*2^3
		-----------------> 5*(2*2*2)
		-----------------> 5*(4*2)
		-----------------> 5*8
		-----------------> 40
		So answer is 40.
	*/ 
	cout<<"Use left shift 5<<2 mens a*2^b "<<(a<<3)<<endl;
	cout<<(a<i)<<" "<<(i<a)<<endl;
	return 0;
}