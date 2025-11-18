#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
    int a, b;
    cin >> a >> b;

    // if(a > b)
    // {
    //     cout << a << endl;
    // }
    // else
    // {
    //     cout << b << endl;
    // }

    //max & min function

    cout << min(a,b) << endl;
    cout << min({3, 5,7, 2, 12}) << endl; //sudhu je 2 ta no. compare kore emon na, its infinity
    cout << max(a,b) << endl;
    cout << max({100, 200, 120, 220, 222}) << endl;

    //swap function

    // int tmp = a;
    // a = b;
    // b = tmp;

    swap(a, b);
    cout << a << " " << b << endl;

    return 0;
}