#include<bits/stdc++.h>
using namespace std;

void playMusic(int songId1=3,int songId2=6)
{
	cout<<"Play Music "<<songId1 <<" and "<<songId2<<endl;
}

int main()
{
/**********************************************/  
    #ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    #endif
/*******************************************/
    // Without giving parameter 
    playMusic();
    // Giving 1 parameter
    playMusic(5);
    // Giving 2 parameter
    playMusic(101,102);
    return 0;
}