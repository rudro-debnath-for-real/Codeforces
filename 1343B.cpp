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
        if ((n / 2) % 2 == 0)
        {
            int sumOdd = 0;
            int sumEven = 0;
            cout << "YES" << '\n';
            for (int i = 2; i <= n; i += 2)
            {
                cout << i << ' ';
                sumEven += i;
            }
            for (int i = 1; i < n-1; i += 2)
            {
                cout << i << ' ';
                sumOdd += i;
            }
            cout << sumEven-sumOdd << endl;
        }
        else
            cout << "NO" << endl;
    }

    return 0;
}