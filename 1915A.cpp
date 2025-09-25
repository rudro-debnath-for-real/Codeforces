#include <bits/stdc++.h>
using namespace std;
#define optimize()                \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);

int d(int n, int a, int b, int c)
{
    while (n--)
    {
        cin >> a >> b >> c;
        if (a != b && a != c)
            cout << a << endl;
        else if (b != c && b != a)
            cout << b << endl;
        else
            cout << c << endl;
    }
}

int main()
{
    optimize();
    int n;
    cin >> n;
    int a, b, c;
    d(n, a, b, c);

    return 0;
}