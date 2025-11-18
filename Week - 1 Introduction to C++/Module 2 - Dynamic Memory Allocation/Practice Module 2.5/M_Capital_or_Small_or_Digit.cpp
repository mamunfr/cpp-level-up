#include <bits/stdc++.h>
using namespace std;
int main()
{
    char x;
    cin >> x;
    int asci = x;

    if (asci >= 48 && asci <= 57)
    {
        cout << "IS DIGIT" << endl;
    }

    else
    {
        cout << "ALPHA" << endl;
        if (asci >= 65 && asci <= 90)
        {
            cout << "IS CAPITAL" << endl;
        }

        if (asci >= 97 && asci <= 122)
        {
            cout << "IS SMALL" << endl;
        }
    }

    return 0;
}