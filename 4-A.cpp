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
    if (n < 3)
        cout << "NO" << endl;
    else if (n % 2 == 0)
    {
        while (n != 0)
        {
            int n = n / 2;
            if (n % 2 == 0)
            {
                cout << "YES" << endl;
                return 0;
            }
        }
    }
    else
        cout << "NO" << endl;

    return 0;
}