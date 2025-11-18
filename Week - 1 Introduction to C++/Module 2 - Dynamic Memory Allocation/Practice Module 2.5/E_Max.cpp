#include<bits/stdc++.h>
using namespace std;

int myMax(int a[], int n)
{
    int mx = INT_MIN;
    
    for(int i = 0; i < n; i++)
    {
        if(a[i] > mx)
        {
            mx = a[i];
        }
    }
    return mx;
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

    int mx = myMax(a, n);
    cout << mx;

    return 0;
}

//or using max funtion

#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int a[n];
    for(int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

     int mx = INT_MIN;
    
    for(int i = 0; i < n; i++)
    {
        // if(a[i] > mx)
        // {
        //     mx = a[i];
        // }

        mx = max(a[i], mx);
    }

    int mx = myMax(a, n);
    cout << mx;

    return 0;
}