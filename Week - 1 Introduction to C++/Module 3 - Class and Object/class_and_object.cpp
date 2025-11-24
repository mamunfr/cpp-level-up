#include<bits/stdc++.h>
using namespace std;
class Student
{
    public:
    char name[100]; //array declaration  //8 byte
    int roll; // 4 byte
    double gpa; // 8 byte

};

// int main()
// {
//     Student a;
//     //a.name = "Mamun"; //initialization sudu matro je line e declare kori sei line e kora jay
//                    //even nicher line e o r hobe na
//     a.roll = 1;
//     a.gpa = 4.5;
//     char temp[100] = "Mamun";
//     strcpy(a.name, temp); //strcpy for copying string, sei khetre protome kothay rakhbo seti 
//                    //bolbo, then koi theke copy korbo seti bolbo

//     cout << a.name << " " << a.roll << " " << a.gpa << endl;
    
//     return 0;
// }

//now doing it using user input

// int main()
// {
//     Student a, b;
//     cin >> a.name >> a.roll >> a.gpa;
//     cin >> b.name >> b.roll >> b.gpa;

//     cout << a.name << " " << a.roll << " " << a.gpa << endl;
//     cout << b.name << " " << b.roll << " " << b.gpa << endl;

//     return 0;
// }

//now what if name has space and there is several names

int main()
{
    Student a, b;
    cin.getline(a.name, 100);
    cin >> a.roll >> a.gpa;
    cin.ignore(); //we r ignoring enter using ignore function
    //getchar();
    cin.getline(b.name, 100);  //getline to take spaced input
    cin >> b.roll >> b.gpa;


    cout << a.name << " " << a.roll << " " << a.gpa << endl;
    cout << b.name << " " << b.roll << " " << b.gpa << endl;
}