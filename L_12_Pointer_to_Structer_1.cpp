#include<iostream>
using namespace std;
struct Rectangle 
{
    int length;
    int breadth;
};
int main()
{
    Rectangle r={39,40}; // no need to use struct
    cout << r.length << endl;
    cout << r.breadth << endl;
    Rectangle *p=&r; // no need to use struct
    cout << endl;
    cout << p->length << endl;
    cout << p->breadth << endl;
    return 0;
}