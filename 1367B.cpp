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
        vector<int> vec(n);
        for (auto &it : vec)
            cin >> it;
        int cnt01 = 0, cnt10 = 0;
        int cnt11 = 0, cnt00 = 0;
        for (int i = 0; i < n; i++)
        {
            if (i % 2 == 0 && vec[i] % 2 == 0)
                cnt00++;
            else if (i % 2 == 1 && vec[i] % 2 == 1)
                cnt11++;
            else if (i % 2 == 1 && vec[i] % 2 == 0)
                cnt10++;
            else if (i % 2 == 0 && vec[i] % 2 == 1)
                cnt01++;
        }

        if (cnt10 == cnt01 && (cnt01 + cnt10 == n))
            cout << (cnt10 + cnt01) / 2 << endl;
        else if (cnt11 + cnt00 == n)
            cout << 0 << endl;
        else if (cnt01 == cnt10 && (cnt01 + cnt10 + cnt00 + cnt11 == n))
            cout << (n - cnt00 - cnt11) / 2 << endl;
        else if (cnt01 != cnt10)
            cout << -1 << endl;
    }

    return 0;
}