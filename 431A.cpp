#include <bits/stdc++.h>
using namespace std;
#define optimize()                \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);

int main()
{
    optimize();

    vector<int> vec(4);
    for (int i = 1; i <= 4; i++)
    {
        cin >> vec[i];
    }

    string str;
    cin >> str;
    int sum = 0;
    for (int i = 0; i < str.size(); i++)
    {
        sum += vec[(int)str[i] - 48];
    }
    cout << sum << '\n';

    return 0;
}