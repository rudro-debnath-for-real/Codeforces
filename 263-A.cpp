#include <bits/stdc++.h>
using namespace std;
int main()
{
    int i = 0, j = 0;
    int a[5][5];
    for (i = 0; i < 5; i++)
    {
        for (j = 0; j < 5; j++)
        {
            cin >> a[i][j];
        }
    }

    for (i = 0; i < 5; i++)
    {
        for (j = 0; j < 5; j++)
        {
            if (a[i][j] == 1)
            {
                cout << abs(i - 2) + abs(j - 2) << endl;
            }
        }
    }

    return 0;
}