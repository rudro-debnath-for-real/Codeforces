#include <bits/stdc++.h>
using namespace std;
#define optimize()                \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);

int main()
{
    optimize();
    int k, n, w;
    cin >> k >> n >> w;
    int pay = 0;
    for (int i = 1; i <= w; i++)
    {
        pay += i * k;
    }
    int borrow = pay - n;
    if (borrow <= 0)
        cout << "0" << endl;
    else
        cout << borrow << endl;

    return 0;
}