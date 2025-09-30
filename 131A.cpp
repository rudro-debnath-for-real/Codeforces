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

    bool cap_all = true;
    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] > 'Z')
        {
            cap_all = false;
        }
    }
    bool not_capital = true;
    for (int i = 1; i < (int)s.size(); i++)
    {
        if (s[0] < 'a' || s[i] > 'Z')
        {
            not_capital = false;
            break;
        }
    }

    if (cap_all == true)
    {
        for (int i = 0; i < (int)s.size(); i++)
        {
            s[i] += 32;
        }
        cout << s;
    }
    else if (not_capital == true)
    {
        for (int i = 0; i < (int)s.size(); i++)
        {
            if (s[i] <= 'Z')
                s[i] += 32;
            else
                s[i] -= 32;
        }
        cout << s << endl;
    }
    else
        cout << s << endl;

    return 0;
}