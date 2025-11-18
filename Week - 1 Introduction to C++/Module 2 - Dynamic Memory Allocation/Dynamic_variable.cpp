
// C te dynamic variable declare kora ektu complicated, we have to use malloc, calloc etc
// but in c++ we use ...new datatype //here new is a keyword
//for example new int...sei khetre heap memory te jabe and 4 byte jayga dokhol korbe

#include<bits/stdc++.h>
using namespace std;
int main()
{
    int x = 10; //normal stack memory te 4 byte jaga nitese
    int *p = new int; //new thakay heap e jabe, then int er jonno 4 byte jayga ney, er por address ta p te rakhe

    *p = 100; // Derefencing. P te rakha address koi thake nisilo seta kuje ber kore then oikhane value update kortese
    cout << *p << endl;


    return 0;
}

//Function theke return aslei je static memory delete hoy, tar proof-

#include<bits/stdc++.h>
using namespace std;
int *p;

int fun()
{
    int x = 10; //static variable
    p = &x;
    cout << "fun --> "<< *p << endl;
    return;
}

int main()
{

    int y = fun();
    int * a = new int; //creating dynamic variable
    delete a; //deleting it. jeita static hole kora jeto na
    cout << "main --> " << *p << endl;
    return 0; //output e fun 10, main 0 dekhabe
}

//Now taking it as dynamic variable

#include<bits/stdc++.h>
using namespace std;
int *p;

int fun()
{
    int *x = new int; //static variable //new keyword address return kore, seti rakhar jonnno pointer lage
    *x = 100;
    p = x;
    cout << "fun --> "<< *p << endl;
    return;
}

int main()
{
    int y = fun();
    cout << "main --> " << *p << endl;
    return 0; //etar output e same dekhabe both function e
} 

