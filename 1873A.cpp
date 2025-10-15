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
        if (str == "abc")
        {
            cout << "YES" << endl;
        }
        else
        {
        string str1 = str;
        string str2 = str;
        string str3 = str;
        bool ck = false;
        swap(str1[0], str1[2]);
        swap(str2[0], str2[1]);
        swap(str3[1], str3[2]);
        if (str1 == "abc" || str2 == "abc" || str3 == "abc")
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
        }
    }
    return 0;
}