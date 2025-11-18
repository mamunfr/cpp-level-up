#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a[3];
    for(int i = 0; i < 3; i++)
    {
        cin >> a[i];
    }

    int b[5];
    for(int i = 0; i < 3; i++) // a array copy 
    {
        b[i] = a[i];
    }

    b[3] = 40; // 5 size er moddhe a array 3 size nise, baki 2 size manually fill kortesi
    b[4] = 50;

    for(int i = 0; i < 5; i++)
    {
        cout << b[i] << " ";  //sundor array print hoise, but problem is ager a array ekhon o memory
                            // taking space for nothing, so to delete we will use dynamic array
    }
}


//Dynamic array

#include<bits/stdc++.h>
using namespace std;
int main()
{
    int * a = new int[3];
    for(int i = 0; i < 3; i++)
    {
        cin >> a[i];
    }

    int * b = new int[5];
    for(int i = 0; i < 3; i++) // a array copy 
    {
        b[i] = a[i];
    }

    b[3] = 40; 
    b[4] = 50;
    delete[] a; //deleting a array, now a isnt a variable here its an array, so we have to add [] this
                //with the delete keyword

    for(int i = 0; i < 5; i++)
    {
        cout << b[i] << " ";  
    }    

}