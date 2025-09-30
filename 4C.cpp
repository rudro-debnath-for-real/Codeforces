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
    vector<string> vec(n);
    for (auto &t : vec)
        cin >> t;
    map<string, int> cnt;
    for (auto t : vec)
    {
        cnt[t]++;
        if (cnt[t] == 1)
            cout << "OK" << endl;
        else if (cnt[t] > 1)
            cout << t << cnt[t] - 1 << endl;
    }
    return 0;
}