#include <bits/stdc++.h>
using namespace std;
#define optimize()                \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);

int main()
{
    optimize();

    int n, m;
    cin >> n >> m;
    vector<int> vec(m);
    for (auto &it : vec)
    {
        cin >> it;
    }
    sort(vec.begin(), vec.end());
    int mini = INT_MAX;
    for (int i = 0; n - 1 + i < m; i++)
    {
        mini = min(mini, (vec[n - 1 + i] - vec[i]));
    }
    cout << mini;

    return 0;
}