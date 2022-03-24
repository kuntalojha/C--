#include<bits/stdc++.h>
using namespace std;
/////////////////////////////////////////////////////////////
struct part // declare a structure
{
	int modelnumber; // ID number of widget
	int partnumber;  // ID number of widget part
	float cost;      // cost of part
};
////////////////////////////////////////////////////////////
int main()
{
/**********************************************/    
    #ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    #endif
/*******************************************/
    part part1;  // define a structure variable 

    part1.modelnumber = 6244; // given value to the structure member
    part1.partnumber =373;	  // given value to the structere member
    part1.cost =21.55F;		  // given value to the structer member

    // Display the value of the structere members
    cout<<"Model "<<part1.modelnumber;
    cout<<", paer "<<part1.partnumber;
    cout<<", costs $ "<<part1.cost;
    return 0;
}