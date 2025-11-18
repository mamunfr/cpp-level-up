#include<bits/stdc++.h>
using namespace std;

void mySwap(int &x, int &y)
{
    int tmp = x;
    x = y;
    y = tmp;
}

void reverseArray(int a[], int n)
{
    for(int i = 0; i < n/2; i++)
    {
        mySwap(a[i], a[n-i-1]);
    }
    return;
}
int main()
{
    int n;
    cin >> n;
    int a[n];
    for(int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    
    reverseArray(a, n);

    for(int i = 0; i < n; i++)
    {
        cout << a[i] << " ";
    }
    return 0;
}

//or we can use

// tmp = a[i];
// a[i] = a[j];
// a[j] = tmp

// to avid that,
// swap(a[i], a[j]);