#include <bits/stdc++.h>
using namespace std;
#define optimize()                \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);

int main()
{
    optimize();
    string str1, str2, str;
    cin >> str1 >> str2;
    for (int i = 0; i < str1.size(); i++)
    {
        if (str1[i] != str2[i])
            str.push_back('1');

        else
            str.push_back('0');
    }
    cout << str << endl;

    return 0;
}