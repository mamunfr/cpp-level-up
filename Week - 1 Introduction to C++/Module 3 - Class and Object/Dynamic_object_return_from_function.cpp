#include<bits/stdc++.h>
using namespace std;

class Student
{
    public:
    int roll;
    int cls;
    double gpa; 

    Student(int roll, int cls, double gpa)
    {
        this->roll = roll;
        this->cls = cls;
        this->gpa = gpa;
    }
};

Student* fun()
{
   Student* karim = new Student(2, 10, 4.50); //Student data type er pointer return kortesi
   return karim;
}

int main()
{
    Student* p = fun(); //obj return hobe fun function theke
    // cout << (*p).roll << " " << (*p).cls << " " << (*p).gpa << endl;
    cout << p->roll << " " << p->cls << " " << p->gpa << endl;
    return 0;
}
