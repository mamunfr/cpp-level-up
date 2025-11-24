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
   Student karim(2, 10, 4.50); //Student data type er pointer return kortesi
   Student* p = &karim;
   return p;
}

int main()
{
    Student* p = fun(); //obj return hobe fun function theke
    // cout << (*p).roll << " " << (*p).cls << " " << (*p).gpa << endl;
    cout << p->roll << " " << p->cls << " " << p->gpa << endl;
    return 0;
}

//eikhane print korle garbage value asbe, as static memory main function e asar aagei delete 
//hoye gese. sei khetre amra dynamic tota new keyword nite hobe
