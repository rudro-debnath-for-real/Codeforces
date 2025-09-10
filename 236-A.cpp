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
    int sz = s.size();
    int i = 0, cnt = 0;
    sort(s.begin(), s.end());
    for (int i = 0; i < sz; i++)
    {
        if (s[i] != s[i + 1])
        {
            cnt++;
        }
    }

    if (cnt % 2 == 0)
        cout << "CHAT WITH HER!" << endl;
    else
        cout << "IGNORE HIM!" << endl;

    return 0;
}