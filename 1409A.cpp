#include <bits/stdc++.h>
using namespace std;
#define optimize()                \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);

int main()
{
    optimize();

    long long n;
    cin >> n;
    long long cnt = 0;
    while (n--)
    {
        long long a, b;
        cin >> a >> b;
        long long mx = abs(a - b);
        if(mx==0)
        {
            cout << '0' << endl;
            continue;
        }
        if (mx > 9)
        {
            cnt = mx / 10;
            if (mx % (cnt * 10) > 0)
                cnt++;
            cout << cnt << endl;
            cnt = 0;
        }
        else if (mx <= 9)
        {
            cout << '1' << endl;
            cnt = 0;
        }
    }
    return 0;
}