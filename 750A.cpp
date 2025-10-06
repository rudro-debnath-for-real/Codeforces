#include <bits/stdc++.h>
using namespace std;
#define optimize()                \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);

int main()
{
    optimize();

    int n, m;
    cin >> n >> m;
    int diff = 240 - m;
    int t = 0, cnt = 0;
    int i = 1;
    while (1)
    {
        t = t + (5 * i);
        i++;
        if (t > diff)
            break;
        cnt++;
    }
    if (cnt < n)
        cout << cnt << endl;
    else if (cnt >= n)
        cout << n << endl;
    return 0;
}
