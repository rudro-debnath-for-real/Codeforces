#include <bits/stdc++.h>
using namespace std;
#define optimize()                \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);

int main()
{
    optimize();
    int n;
    cin >> n;
    char str[n + 1];
    for (int i = 0; i < n; i++)
    {
        cin >> str[i];
        if (str[i] > 'Z')
        {
            str[i] -= 32;
        }
    }
    sort(str, str + n);
    char mark = '0';
    int cnt = 0;
    for (int i = 0; i < n; i++)
    {
        if (mark == str[i])
            continue;
        else if (str[i] != str[i + 1])
        {
            cnt++;
            mark = str[i];
        }
    }
    // cout << cnt << endl;
    if (cnt == 26)
        cout << "YES" << endl;
    else
        cout << "NO" << endl;

    return 0;
}