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
        int n;
        cin >> n;
        if (n < 3)
            cout << '0' << endl;
        else if (n % 2 == 0)
        {
            cout << (n / 2) - 1 << endl;
        }
        else
            cout << n / 2 << endl;
    }

    return 0;
}