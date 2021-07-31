#include<iostream>
using namespace std;
struct Rectengle
{
    int length;
    int breadth;
};
int main()
{
    struct Rectengle r={10,20};
    struct Rectengle *p=&r;
    r.length=15;
    (*p).breadth=20; // or we can wright p->length also.
    cout << r.length << endl;
    cout << r.breadth ;
}