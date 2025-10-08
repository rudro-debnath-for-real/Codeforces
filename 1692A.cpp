#include <bits/stdc++.h>
using namespace std;
#define optimize()                \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);

int main()
{
    optimize();

    int n;
    cin >> n;
    int cnt = 0;
    while (n--)
    {
        int x, y, z, a;
        cin >> x >> y >> z >> a;
        if (x < y)
            cnt++;
        if (x < z)
            cnt++;
        if (x < a)
            cnt++;

        cout << cnt << endl;
        cnt = 0;
    }

    return 0;
}