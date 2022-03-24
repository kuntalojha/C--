#include<bits/stdc++.h>
using namespace std;

 void say_hello()
 {
 	cout<<"\nHello "<<endl;;
 }
 void say_hello_to_Kuntal()
 {
 	cout<<"Kuntal Ojha"<<endl;
 }

int main()
{
/**********************************************/  
    #ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    #endif
/*******************************************/
    cout<<"Here I call function say_hello and then call function say_hello_to_Kuntal"<<endl;
    say_hello();
    say_hello_to_Kuntal();

    return 0;
}