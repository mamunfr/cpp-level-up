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

Student fun()
{
   Student karim(2, 10, 4.50); //karim student data type er tai, return type o student hobe
   return karim;
}

int main()
{
    Student obj = fun(); //obj return hobe fun function theke
    cout << obj.roll << " " << obj.cls << " " << obj.gpa << endl;
    return 0;
}

//dynamic object hole we use new keyword. that means,our above obj is static and 
//we can see static obj theke we can get return, unlike array
//so behind the scene it is working as variable
//static variable function theke return korlew, we can get it from main function