#include<iostream>
using namespace std;
int main()
{
    // char s[100];
    // cin >> s; //Hello World
    // cout << s; // Hello. space pele r input nite pare na

    //so, to solve this

    //char s[100];
    //fgets(s,100,stdin) //we used to use fgets in c while encountering spaced string
    //in c++ we will be using
    //cin.getline(s,100); //string name and size //to take space soho input
    //cout << s;

    //sometimes getline jhamela kore, jemon string er age, jodi kunu int input thake , enter k o input dore ney
    //To avoid this, we usually will be using cin >> s, but if we have to take 
    //spaced string as input and theres something else before string say int n, cin >> n, we will be 
    //using ignore function

    int x;
    cin >> x;
    cin.ignore();
    char s[100];
    cin.getline(s, 100);

    cout << x << endl << s << endl;

    //anyway, c++ itself has string data type, string s; to avoid these stuff
    //built in string function, doesnt even have to include size
    return 0;
}