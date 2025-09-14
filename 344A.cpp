#include <bits/stdc++.h>
using namespace std;
#define optimize()                \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);

int main()
{
    optimize();
    int n, cnt = 1;
    cin >> n;
    string p, c;
    cin >> p;
    for (int i = 1; i < n; i++)
    {
        cin >> c;
        if (p != c)
            cnt++;
        p = c;
    }

    cout << cnt << endl;

    return 0;
}