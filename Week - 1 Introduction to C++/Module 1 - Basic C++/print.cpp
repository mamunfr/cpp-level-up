//in c we used printf function, but in c++ we use a std namok namespace file named cout, for new line endl;
//C++ doesnt need format specifier unlike c

#include<iostream>
int main()
{
    int x = 100;
    char c = 'A';
    double d = 34.56;
    std::cout << x << " " << c << std:: endl << d << std:: endl;
    //My favourite number is 100
    std::cout << "My favourite number is " << x << std::endl;
    return 0;
}