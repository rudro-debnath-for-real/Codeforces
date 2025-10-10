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
    while (n--)
    {
        int a;
        cin >> a;
        int sum = 0;
        while (a != 0)
        {
            sum += a % 10;
            a /= 10;
        }
        cout << sum << endl;
    }
    return 0;
}