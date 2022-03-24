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
    string alphabet {"abcdefghijklmnopqrstuvvxyzABCDEFGHIJKLMNOPQRSTUVWXYZ"};
    string key {"QWERTYUIOPASDFGHJKLZXCVBNMqwertyuiopasdfghjklzxcvbnm"};

    string secret_message{};
    cout<<"Enter yours secret message.......... "<<endl;
    cin>>secret_message;

    string encrypted_massage{};
    cout<<"\nSecret message: "<<secret_message<<endl;

    for(char c: secret_message)
    {
    	size_t position = alphabet.find(c);
    	if(position !=string::npos)
    	{
    		char new_char {key.at(position)};
    		encrypted_massage += new_char;
    	}else
    	{
    		encrypted_massage +=c;
    	}
    }
    cout<<"\nEncryped message: "<< encrypted_massage <<endl;

    string decrypted_massage{};
    cout<<"\nDecrypting message......"<<endl;

    for(char C: encrypted_massage)
    {
    	size_t position= key.find(C);
    	if(position != string::npos)
    	{
    		char new_char {alphabet.at(position)};
    		decrypted_massage += new_char;
    	}else
    	{
    		decrypted_massage +=C;
    	}
    }
    cout<<"\nDecrypted message: "<<decrypted_massage<<endl;
    return 0;
}