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
        int n;
        cin >> n;
        string str;
        cin >> str;
        sort(str.begin(), str.end());
        char duplicate = '0';
        int cnt = 0;
        for (int i = 0; i < n; i++)
        {
            if (duplicate == str[i])
            {
                cnt++;
            }
            else
            {
                cnt += 2;
                duplicate = str[i];
            }
        }
        cout << cnt << endl;
        cnt = 0;
    }
    return 0;
}