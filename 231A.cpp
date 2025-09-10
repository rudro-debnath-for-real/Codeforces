#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, count = 0;
    cin >> n;
    int a[3];
    for (int i = 0; i < n; i++)
    {
        cin >> a[0] >> a[1] >> a[2];
        if (a[0] == 1 && a[1] == 1 && a[2] == 1)
        {
            count++;
        }
        else if (a[0] == 1 && a[1] == 1 && a[2] == 0)
        {
            count++;
        }
        else if (a[0] == 0 && a[1] == 1 && a[2] == 1)
        {
            count++;
        }
        else if (a[0] == 1 && a[1] == 0 && a[2] == 1)
        {
            count++;
        }
    }
    cout << count << endl;

    return 0;
}