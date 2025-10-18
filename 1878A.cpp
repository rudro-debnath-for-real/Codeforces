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
        int n, a;
        cin >> n >> a;
        bool found = false;
        for (int i = 0; i < n; i++)
        {
            int x;
            cin >> x;
            if (x == a)
            {
                found = true;
            }
        }
        if (found)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }

    return 0;
}