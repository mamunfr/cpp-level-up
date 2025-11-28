#include <bits/stdc++.h>
using namespace std;

int main()
{
    char c[100005];

    while (fgets(c, 100005, stdin))
    {

        char ans[100005];
        int idx = 0;

        for (int i = 0; c[i] != '\0'; i++)
        {
            if (c[i] != ' ' && c[i] != '\n')
            {
                ans[idx] = c[i];
                idx++;
            }
        }

        sort(ans, ans + idx);

        for (int i = 0; i < idx; i++)
        {
            cout << ans[i];
        }
        cout << endl;
    }

    return 0;
}
