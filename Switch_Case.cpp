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
    int day;
    cin>>day;
    switch(day)
    {
    	case 1: cout<<"Monnday";
    			break;
    	case 2: cout<<"Tuesday";
    			break;
    	case 3: cout<<"Wednesday";
    			break;
    	case 4: cout<<"Thursday";
    			break;
    	case 5: cout<<"Friday";
    			break;
    	case 6: cout<<"Suterday";
    			break;
    	case 7: cout<<"Sunday";
    			break;
    	default:cout<<"Please enter a valid input";
    			break;
    }
    return 0;
}