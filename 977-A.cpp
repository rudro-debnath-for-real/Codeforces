#include <bits/stdc++.h>
using namespace std;
#define optimize()                \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);

int main()
{
    optimize();
    int n, k;
    cin >> n >> k;
    while (k > 0)
    {

        if (n % 10 != 0)
        {
            n = n - 1;
        }
        else if (n % 10 == 0)
        {
            n = n / 10;
        }
        k--;
    }

    cout << n << endl;
    return 0;
}