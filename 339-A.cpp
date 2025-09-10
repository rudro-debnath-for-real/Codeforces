#include <bits/stdc++.h>
using namespace std;
#define optimize()                \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);

int main()
{
    optimize();
    string str, temp;
    cin >> str;
    int x = str.size();
    vector<int> vec;
    for (int i = 0; i <= x; i += 2)
    {
        temp.push_back(str[i]);
    }
    sort(temp.begin(), temp.end());
    int y = temp.size();

    for (int i = 0; i < temp.size(); i++)
    {

        cout << temp[i];
        if (i < y - 1)
        {
            cout << "+";
        }
    }

    return 0;
}