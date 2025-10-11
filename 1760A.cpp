#include <bits/stdc++.h>
using namespace std;
#define optimize()                \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);

int main()
{
    optimize();

    int n;
    cin >> n;
    while (n--)
    {
        int a, b, c;
        cin >> a >> b >> c;
        int mx, mx2;
        if (a > b && a > c)
        {
            mx = a;
            if (b > c)
                mx2 = b;
            else if (c > b)
                mx2 = c;
        }
        else if (b > a && b > c)
        {
            mx = b;
            if (a > c)
                mx2 = a;
            else if (c > a)
                mx2 = c;
        }
        else
        {
            mx = c;
            if (a > b)
                mx2 = a;
            else if (b > a)
                mx2 = b;
        }
        cout << mx2 << endl;
    }

    return 0;
}