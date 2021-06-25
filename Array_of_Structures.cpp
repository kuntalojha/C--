#include<iostream>
using namespace std;
struct Student{
    int roll_no;
    char grade;
    float marks;
};
void Display(struct Student Class_recode[5])
{
    for (int i=0; i<5; i++)
    {
        cout << "Roll no is: " << Class_recode[i].roll_no << endl;
        cout << "Grade  is: " << Class_recode[i].grade << endl;
        cout << "Marks  is: " << Class_recode[i].marks << endl;
        cout<<endl;
    }
}

int main()
{
    struct Student Class_recode[5]={{1,'A',91.69},{4,'B',90.69},{6,'D',50.69},{8,'F',30.69},{19,'E',50.9}};
    Display(Class_recode);
    return 0;    
}