#include <bits/stdc++.h>
using namespace std;
#define optimize()                \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);

int main()
{
    optimize();
    int x1, x2, x3;
    cin >> x1 >> x2 >> x3;
    int big = 0, smal = 0;
    big = max(max(x1, x2), x3);
    smal = min(min(x1, x2), x3);
    cout << sqrt((big * big) + (smal * smal) - (2 * big * smal));
    return 0;
}