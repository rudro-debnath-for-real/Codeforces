#include <bits/stdc++.h>
using namespace std;
#define optimize()                \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);

int main()
{
    optimize();
    long long n, t, d, cnt = 0;
    cin >> n;
    while (n > 0)
    {
        d = n % 10;
        if (d == 4 || d == 7)
            cnt++;
        n = n / 10;
    }
    if (cnt == 4 || cnt == 7)
        cout << "YES" << endl;
    else
        cout << "NO" << endl;

    return 0;
}