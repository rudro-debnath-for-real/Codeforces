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
        int odd_cnt = 0, even_cnt = 0;
        for (int i = 0; i < n; i++)
        {
            int x;
            cin >> x;
            if (x % 2 == 0)
                even_cnt++;
            else
                odd_cnt++;
        }
        if (odd_cnt % 2 != 0)
            cout << "NO" << '\n';
        else
            cout << "YES" << '\n';
    }

    return 0;
}