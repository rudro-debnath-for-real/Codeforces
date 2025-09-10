#include <bits/stdc++.h>
using namespace std;
#define optimize()                \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);

int main()
{
    optimize();
    int n, cnt = 0;
    cin >> n;
    while (n > 0)
    {
        n = n - 5;
        cnt++;
    }

    cout << cnt << endl;

    return 0;
}