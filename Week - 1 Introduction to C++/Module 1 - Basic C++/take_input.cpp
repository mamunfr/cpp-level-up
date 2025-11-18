//C te input nite hole scanf egula lagto, c++ e just cin for input and angualar bracket, similarly, cout for output
//bar bar std:: likha biroktikor, tai amra agei bole dibo std namespace use kortesi

#include<iostream>
using namespace std;
int main()
{
    // int x;
    // char c;
    // double d;
    // cin >> x >> c >> d;
    // cout << x << " " << c << endl << d << endl;

    //NOW, if we needed ascii value of a char in C, we could print it using %d format specifier.
    //But C++ has nothing to do with format specifier. Then how we get the ascii value of a char??

    // char m = 'A';
    // int ascii = m;
    // cout << ascii << endl;

    //either this way or we can do typecasting to print ascii, char -> int

    // char b = 'a';
    // cout << (int) b << endl; //typecastiing

    //Similarly we can do ulta kaj, int -> char

    int y = 65;
    cout << (char) y << endl;


}