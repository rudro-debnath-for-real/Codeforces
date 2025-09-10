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
    int cntu = 0, cntl = 0;
    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] > 'Z')
            cntl++;
        if (s[i] < 'a')
            cntu++;
    }
    for (int i = 0; i < s.size(); i++)
    {
        if (cntu > cntl)
            cout << ((char)toupper(s[i]));
        else if (cntu < cntl)
            cout << ((char)tolower(s[i]));
        else if (cntu == cntl)
            cout << ((char)tolower(s[i]));
    }

    return 0;
}