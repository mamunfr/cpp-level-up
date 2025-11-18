//C te amra double e dosomik control kortam format specifier er %.1lf or %.2lf eigula diye, 
//taile C++ e toh format specifier e nai. Sei jonnoi we use setprecision, but for that we have to include a header file

#include<iostream> //input output stream
#include<iomanip> //input output manipulation
using namespace std;
int main()
{
    // double d = 34.56789;
    // cout << d << endl; //eikhane output e dekha jabe o sobgula print korte pare na
    
    //so,we will use setprecision

    double y = 23.45678;
    cout << fixed << setprecision(5)<< y << endl; //eibar proper output asbe, fixed and setprecision use + header file
    return 0;
}