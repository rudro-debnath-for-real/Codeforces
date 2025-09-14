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
    string h = "hello";
    cin >> s;
    int ss = s.size();
    int cnt = 0, j = 0;
    for (int i = 0; i < h.size(); i++)
    {
        while (j < ss)
        {
            if (h[i] == s[j])
            {
                cnt++;
                j++;
                break;
            }
            j++;
        }
        if (cnt == h.size())
            break;
    }
    // cout << cnt << endl;

    if (cnt == h.size())
        cout << "YES" << endl;
    else
        cout << "NO" << endl;

    return 0;
}