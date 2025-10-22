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
        string str;
        cin >> str;
        int begin = 0, end = n - 1;
        int cnt = 0;
        while (begin < end)
        {
            if ((str[begin] == '1' && str[end] == '0') || (str[begin] == '0' && str[end] == '1'))
            {
                cnt += 2;
                begin++;
                end--;
            }
            else
                break;
        }
        if (cnt > 0)
            cout << n - cnt << '\n';
        else if (cnt == 0)
            cout << n << '\n';
    }

    return 0;
}