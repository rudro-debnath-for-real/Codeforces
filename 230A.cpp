#include <bits/stdc++.h>
using namespace std;
#define optimize()                \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);

int main()
{
    optimize();
    int K_s, n;
    cin >> K_s >> n;
    vector<pair<int, int>> ds_Pair(n);
    for (int i = 0; i < n; i++)
    {
        cin >> ds_Pair[i].first >> ds_Pair[i].second;
    }
    sort(ds_Pair.begin(), ds_Pair.end());
    for (int i = 0; i < n; i++)
    {
        if (ds_Pair[i].first >= K_s)
        {
            cout << "NO" << endl;
            return 0;
        }
        else if (ds_Pair[i].first < K_s)
        {
            K_s += ds_Pair[i].second;
        }
    }
    cout << "YES" << endl;

    return 0;
}