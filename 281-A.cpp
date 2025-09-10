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
    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] > 90 && i == 0)
        {
            s[i] = s[i] - 32;
        }
        // if (s[i]<97 && i!=0)
        // {
        //     s[i] = s[i] + 32;
        // }
    }
    cout << s << endl;

    return 0;
}