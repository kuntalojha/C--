/*

Electricity bill claculator 
Given total consumption of a household in units,
write a program to estimate the total bill
amount as per the table 
|--------------------|----------------------|
|   Unigts           |    Charges		    |
|--------------------|----------------------|
|  1 to 100 Units    |    Free              |
|--------------------|----------------------|
|  100 to 200 Units  |    Rs. 5/unit        |
|--------------------|----------------------|
|  200 to 300 Units  |    Rs. 10/unit       |
|--------------------|----------------------|
|  300 to 400 Units  |    Rs. 12/unit       |              
|--------------------|----------------------| 
|  400 + units       |    Rs. 15/Units 		|
|--------------------|----------------------|

*/

#include <bits/stdc++.h>
using namespace std;

int main()
{

/**********************************************/  
    #ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    #endif
/*******************************************/
    
	int Units;
	cout<<"Enter your units "<<endl;
	cin>>Units;
	int electricity_bill;
	if(Units<=100)
	{
		electricity_bill=0;
	}else if(Units<=200)
	{
		electricity_bill=units	
	}else if(Units<=300)
	{
		cout<<"Your electricity bill is "<<Units*10;
	}else if(Units<=40)
	{
		cout<<"Your electricity bill is "<<Units*12;
	}else if(Units>400)
	{
		cout<<"Your electricity bill is "<<Units*15;
	}
}