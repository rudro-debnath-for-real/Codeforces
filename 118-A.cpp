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
    string t;
    cin >> s;
    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] < s[i] + 32)
        {
            t.push_back(tolower(s[i]));
        }
        else
            t.push_back(s[i]);
    }
    string v = "aeiouy";
    string temp;
    for (int i = 0; i < t.size(); i++)
    {
        if (t[i] != v[0] && t[i] != v[1] && t[i] != v[2] && t[i] != v[3] && t[i] != v[4] && t[i] != v[5])
        {
            temp.push_back(t[i]);
        }
    }

    for (int i = 0; i < temp.size(); i++)
    {
        cout << "." << temp[i];
    }

    return 0;
}