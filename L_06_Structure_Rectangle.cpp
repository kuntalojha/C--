#include<iostream>
using namespace std;
struct Rectangle
{
    int length;
    int breadth;
};
int main()
{
   int Area_of_a_Rectangle;
   struct Rectangle R={10,50};
   Area_of_a_Rectangle= R.length*R.breadth;
   cout << "Length of this Rectangle is " << R.length << endl;
   cout << "Breadth of this Rectangle is " << R.breadth << endl;
   cout << "Area of this Rectangle is " << Area_of_a_Rectangle ;
   return 0;
}