#include <iostream>
using namespace std;
int main()
{
    int A[6]={2,4,7,9,10,89};
    int B[]={10,20,30,40,89,8,100,209};
    int C[10]={0};
    int D[10]={10,20,30,49,92,89};
    cout << "Size od Array A is " << sizeof(A) << endl;
    cout << "Size od Array B is " << sizeof(B) << endl;
    cout << "Now i am swing the value of Array C" << endl;
    for (int  i = 0; i < 10; i++)
    {
        cout << "Index :" << i <<" Value is : "<< C[i] << endl;
    }
    cout << "Now i am swing the value of Array C" << endl;
    for (int  i = 0; i < 10; i++)
    {
        cout << "Index :" << i <<" Value is : "<< D[i] << endl;
    }
    return 0;
} 
