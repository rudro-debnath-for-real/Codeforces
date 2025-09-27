#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    vector<pair<int, int>> vec(n);
    for (auto &t : vec)
        cin >> t.first >> t.second;
    int cnt = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {

            if (vec[i].first == vec[j].second && i != j)
                cnt++;
        }
    }
    cout << cnt << endl;
}