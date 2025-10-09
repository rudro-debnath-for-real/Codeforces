#include <bits/stdc++.h>
using namespace std;
#define optimize()                \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);

int main()
{
    optimize();

    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int m1 = n%1000;
        n /= 1000;
        int m2=n;
        int sum1 = 0;
        while (m1!=0)
        {
            int n1;
            n1 = m1 % 10;
            m1 /= 10;
            sum1 += n1;
        }
        int sum2 = 0;
        while (m2 != 0)
        {
            int n2;
            n2 = m2 % 10;
            m2 /= 10;
            sum2 += n2;
        }
        if (sum2 == sum1)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }

    return 0;
}