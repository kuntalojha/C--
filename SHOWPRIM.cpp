#include<iostream>
using namespace std;
#include<conio.h>
int main()
{
   const unsigned char WHITE=219;
   const unsigned char GRAY=176; 
   unsigned char ch;
   for (int  count= 0; count <80*25-1 ; count++)
   {
       ch=WHITE;
       for (int j = 2; j < count; j++)
           /* code */
           if (count%j==0)
           {
               /* code */
               ch=GRAY;
               break;
           }
           cout<<ch; 
   }
      getch();
      return 0;
}