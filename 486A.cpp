#include <bits/stdc++.h>
using namespace std;
#define optimize()                \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);

int main()
{
    optimize();
    long long n, sum = 0;
    cin >> n;
    sum = ((n + 2) - 1) / 2;
    if (n % 2 == 0)
        cout << sum << endl;
    else
        cout << -sum << endl;

    return 0;
}