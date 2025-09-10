#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long n, m, a;
    cin >> n >> m >> a;
    if (n == a && m == a)
    {
        cout << "1" << endl;
    }

    else if (n * m <= a * a)
    {
        cout << "1" << endl;
    }

    else
    {

        long long x = n / a;
        long long y = m / a;
        if (n % a > 0)
        {
            x++;
        }
        if (m % a > 0)
        {
            y++;
        }
        long long t = x * y;
        cout << t << endl;
    }

    return 0;
}