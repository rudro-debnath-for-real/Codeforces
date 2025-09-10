#include <bits/stdc++.h>
using namespace std;
#define optimize()                \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);

int main()
{
    optimize();
    int n, cnta = 0, cntb = 0;
    cin >> n;
    string s;
    cin >> s;
    for (int i = 0; i < n; i++)
    {
        if (s[i] == 'A')
            cnta++;
        else
            cntb++;
    }
    if (cnta > cntb)
        cout << "Anton" << endl;
    else if (cnta < cntb)
        cout << "Danik" << endl;
    else if (cnta == cntb)
        cout << "Friendship" << endl;

    return 0;
}