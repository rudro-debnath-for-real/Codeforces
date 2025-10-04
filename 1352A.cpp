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
    vector<int> vec;
    // 103 --> 1*10^2 , 0*10^1 ,  3*10^0
    while (t--)
    {
        int n, cnt = 0;
        cin >> n;
        int m = n;
        while (m != 0)
        {
            int digit = m % 10;
            if (digit > 0)
                cnt++;
            m /= 10;
        }
        cout << cnt << endl;
        for (int i = 0; n != 0; i++)
        {
            int digit = n % 10;
            if (digit > 0)
                cout << digit * pow(10, i) << ' ';
            n /= 10;
        }
        cout << endl;
    }

    return 0;
}