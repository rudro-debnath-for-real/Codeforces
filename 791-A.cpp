#include <bits/stdc++.h>
using namespace std;
#define optimize()                \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);

int main()
{
    optimize();
    int a, b, y = 0;
    cin >> a >> b;
    while (a <= b)
    {
        a *= 3;
        b *= 2;
        y++;
    }
    cout << y << endl;

    return 0;
}