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

    //sort(starting, ending)  //array starting point a nijei, cz it hold 0th address a[0];
    sort(a, a+n); //Ascending order //array sesh howar ager index porjonto sort kore, tai sort ek ghor beshi
                //neya lage
    sort(a, a+n, greater<int>()); //descending order //built in compare funtion

    for(int i = 0; i < n; i++)
    {
        cout << a[i] << " ";
    }
    return 0;
}