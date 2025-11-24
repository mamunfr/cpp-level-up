//constructor thake class er bitore
//constructor ekti function
//constructor er kunu return type thake na
//constructor er name hoy exactly class er name er moto
//constructor automatic call hoy

#include<bits/stdc++.h>
using namespace std;

class Student
{
    public:
    int roll;
    int cls;
    double gpa;

    // Student(int r, int c, double g)  //Declaring Constructor and giving parameters
    // {
    //     roll = r;
    //     cls = c;
    //     gpa = g;

    // }
};

int main()
{
    //Student rahim;
    // rahim.roll = 45;
    // rahim.cls = 5;
    // rahim.gpa = 3.25;

    // Student karim;
    // karim.roll = 2;
    // karim.cls = 5;
    // karim.gpa = 5.0;

    //after declaring constructor, we dont need to write same things again nd again

    //instead, 

    // Student rahim(45,5,3.2);
    // Student karim(2,5,5.0);

    //with user input
    // int r;
    // int c;
    // double g;
    // cin >> r >> c >> g;

    // Student rahim(r,c,g);

    //without constructor
    Student rahim;
    cin >> rahim.roll >> rahim.cls >> rahim.gpa;

    cout << rahim.roll << " " << rahim.cls << " " << rahim.gpa << endl;
    //cout << karim.roll << " " << karim.cls << " " << karim.gpa << endl;
    
    return 0;
}