// Normal static array

#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a[5];
    for (int i = 0; i < 5; i++)
    {
        cin >> a[i];
    }

    for (int i = 0; i < 5; i++)
    {
        cout << a[i] << " ";
    }
    return 0;
}


//dynamic array --> 1. Size baranu jay 2. function theke return korle pawa jay

#include <bits/stdc++.h>
using namespace std;
int main()
{
    int * a = new int[5];
    for (int i = 0; i < 5; i++)
    {
        cin >> a[i];
    }

    for (int i = 0; i < 5; i++)
    {
        cout << a[i] << " ";
    }
    return 0;
}