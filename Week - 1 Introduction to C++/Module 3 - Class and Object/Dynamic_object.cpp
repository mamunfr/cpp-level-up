//Object er data type tar class er name
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

int main()
{
    Student rahim(1, 5, 4.50);
    //new Student; //it will give error since theres a constructor, to solve this we have to give
                   //its value
    Student* karim = new Student(10,5,4.56); //Dynamic object creating done, it happened in hip memory
    //Dynamic object create howar pore seta pointer return kore. so we have to
    //recieve it in a pointer.

    cout << rahim.roll << " " << rahim.cls << " " << rahim.gpa << endl;
    cout << karim->roll << " " << karim->cls << " " << karim->gpa << endl;
    return 0;
}

//class e constructor thakle dynamic object sudhu new Student diye hobe na
// arrow er behind the scene e dereferencin choltese