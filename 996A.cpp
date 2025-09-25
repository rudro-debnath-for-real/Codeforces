#include <bits/stdc++.h>
using namespace std;
#define optimize()                \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);

int main()
{
    optimize();
    long long n, cnt = 0;
    cin >> n;
    while (n != 0)
    {
        if (n >= 100)
        {
            cnt += n / 100;
            n %= 100;
        }
        else if (n >= 20)
        {
            cnt += n / 20;
            n %= 20;
        }
        else if (n >= 10)
        {
            cnt += n / 10;
            n %= 10;
        }
        else if (n >= 5)
        {
            cnt += n / 5;
            n %= 5;
        }
        else if (n < 5)
        {
            cnt += n;
            n = 0;
        }
    }
    cout << cnt << "\n";
    return 0;
}