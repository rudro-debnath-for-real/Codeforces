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
        string str;
        cin >> str;
        if (str.size() > 2)
        {
            for (int i = 0; i < str.size(); i += 2)
            {
                cout << str[i];
            }
            cout << str[str.size()-1];
        }
        else
            cout << str;
        cout << endl;
    }

    return 0;
}