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
        int cnt = 0, i = 0;
        while (cnt < n)
        {
            i++;
            if (i % 3 != 0 && i % 10 != 3)
            {
                cnt++;
            }
        }
        cout << i << endl;
    }

    return 0;
}