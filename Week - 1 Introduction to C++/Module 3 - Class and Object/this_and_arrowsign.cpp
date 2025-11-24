//"this" is a pointer,not an object
//this er moddhe roll nai
//eikhane this rahim k point kortese

//we use this if variable name are same

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
        this->roll = roll; //this here actually accessing rahim, not roll
        //now to access roll directly, we need to dereference
        (*this).roll = roll;

        this->cls = cls;
        this->gpa = gpa;
    }
};

int main()
{
    Student rahim(1, 5, 4.50);
    Student karim(2, 10, 4.50);

    cout << rahim.roll << " " << rahim.cls << " " << rahim.gpa << endl;
    cout << karim.roll << " " << karim.cls << " " << karim.gpa << endl;
    return 0;
}