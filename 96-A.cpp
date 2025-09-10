#include <bits/stdc++.h>
using namespace std;
#define optimize()                \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);

int main()
{
    optimize();
    string s;
    cin >> s;
    int cnt0 = 0, cnt1 = 0;
    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] == '0')
        {
            cnt0++;
            if (cnt0 >= 7)
            {
                cout << "YES" << endl;
                break;
            }
        }
        else if (s[i] == '1')
        {
            cnt0 = 0;
        }
    }
    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] == '1')
        {
            cnt1++;
            if (cnt1 >= 7 && cnt0 < 7)
            {
                cout << "YES";
                break;
            }
        }
        else if (s[i] == '0')
        {
            cnt1 = 0;
        }
    }

    if (cnt1 < 7 && cnt0 < 7)
        cout << "NO" << endl;

    return 0;
}