#include <bits/stdc++.h>
using namespace std;
#define optimize()                \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);

int main()
{
    optimize();

    int t;
    cin >> t;
    while (t--)
    {
        int a, b, c;
        cin >> a >> b >> c;
        if (a < b && b < c)
            cout << "STAIR" << '\n';
        else if (a < b && b > c)
            cout << "PEAK" << '\n';
        else
            cout << "NONE" << '\n';
    }

    return 0;
}