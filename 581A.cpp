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
    int mx = max(n, m);
    int mn = min(n, m);
    int t = (mx - mn) / 2;
    cout << mn << ' ' << t;
    return 0;
}