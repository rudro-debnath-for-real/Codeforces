#include <bits/stdc++.h>
using namespace std;
#define optimize()                \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);

int main()
{
    optimize();
    long long n, k;
    cin >> n >> k;
    long long tn = (n + 1) / 2;
    if (k > tn)
    {
        cout << 2 + ((k - tn - 1) * 2) << endl;
    }
    else
        cout << 1 + ((k - 1) * 2) << endl;

    return 0;
}