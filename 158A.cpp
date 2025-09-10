#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, k;
    int cnt = 0;
    cin >> n >> k;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    for (int i = 0; i < n; i++)
    {
        if (a[i] <= 0)
        {
            continue;
        }

        else if (a[i] >= a[k - 1])
        {
            cnt++;
        }
    }
    cout << cnt << endl;

    return 0;
}