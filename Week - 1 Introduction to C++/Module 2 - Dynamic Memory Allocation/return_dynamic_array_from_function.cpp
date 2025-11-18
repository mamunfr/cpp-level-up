// #include<bits/stdc++.h>
// using namespace std;

// int* fun()
// {
//     int a[5];
//     for(int i = 0; i < 5; i++)
//     {
//         cin >> a[i];
//     }
//     return a; //this a already is a pointer, as it contains 0th index address, so function
//     //type should also be pointer
// }
// int main()
// {
//     int* x = fun(); //as fun function theke pointer hishebe return hobe, tai pointer diyei recieve korte hobe
//     for(int i = 0; i < 5; i++)
//     {
//         cout << x[i] << " ";  //segmentation fault asbe //as static hishebe declare kora hoisilo
//                               //main e asar agei static theke delete hoye gese

//                               //eikhane array k print korte chacchi tai, segmentatin fault ascilo
//     }
//     return 0;
// }


//Dynamic array return

#include<bits/stdc++.h>
using namespace std;

int* fun()
{
    int * a = new int[5];
    for(int i = 0;  i < 5; i++)
    {
        cin >> a[i];
    }
    return a;
}
int main()
{
    int * x = fun ();
    for(int i = 0; i < 5; i++)
    {
        cout << x[i] << " ";  // ekhon tiktak print hobe without any segmentation fault
    }
}