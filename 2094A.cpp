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
        string str1, str2, str3;
        cin >> str1 >> str2 >> str3;
        cout << str1[0]  << str2[0]<< str3[0] <<'\n';
    }

    return 0;
}