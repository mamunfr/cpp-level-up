#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a, b, c;
    cin >> a >> b >> c;

    int mx = INT_MIN;
    int min = INT_MAX;

    if(a < min) min = a;
    if(b < min) min = b;
    if(c < min) min = c;

    if(a > mx) mx = a;
    if(b > mx) mx = b;
    if(c > mx) mx = c;

    cout << min << " " << mx;
    return 0;
}