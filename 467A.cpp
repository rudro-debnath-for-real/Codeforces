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
    for (int i = 0; i < n; i++)
    {
        int a, b;
        cin >> a >> b;
        if (a < b)
        {
            if ((a + 2) <= b)
                cnt++;
        }
    }
    cout << cnt << endl;

    return 0;
}