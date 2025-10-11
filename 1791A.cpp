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
        char c;
        cin >> c;
        if (c == 'c' || c == 'o' || c == 'd' || c == 'e' || c == 'f' || c == 'r' || c == 'e' || c == 's')
            cout << "YES" << endl;
        else
            cout << " NO" << endl;
    }

    return 0;
}