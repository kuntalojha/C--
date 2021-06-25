#include<iostream>
using namespace std;
struct Rectangle
{
    int length;
    int breadth;
}Rectangle;
int main()
{
   int Area_of_a_Rectangle;
   Rectangle ={10,50};
   Area_of_a_Rectangle= Rectangle.length*Rectangle.breadth;
   cout << "Length of this Rectangle is " << Rectangle.length << endl;
   cout << "Breadth of this Rectangle is " << Rectangle.breadth << endl;
   cout << "Area of this Rectangle is " << Area_of_a_Rectangle <<endl;
   cout << "Size od the Structer is " << sizeof(Rectangle);
   return 0;
}