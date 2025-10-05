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
    int c1 = 0, c2 = 0, c3 = 0, c4 = 0;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        if (x == 1)
            c1++;
        else if (x == 2)
            c2++;
        else if (x == 3)
            c3++;
        else if (x == 4)
            c4++;
    }
    int cnt = 0;
    cnt += c4;
    cnt += c3;
    c1 = max(0, c1 - c3);
    cnt += c2 / 2;
    c2 %= 2;
    cnt += (((c2 * 2) + c1) + 4 - 1) / 4;
    cout << cnt << endl;

    return 0;
}