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
    int cnt = 0;
    int flag = 0, n;
    while (t--)
    {
        cin >> n;
        if (n > 0)
        {
            flag += n;
        }
        else if (flag > 0 && n < 0)
        {
            flag += n;
        }
        else if (flag == 0 && n < 0)
        {
            cnt -= n;
            flag = 0;
        }
    }
    cout << cnt << endl;
    return 0;
}