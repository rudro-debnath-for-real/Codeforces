#include <bits/stdc++.h>
using namespace std;
#define optimize()                \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);

int main()
{
    optimize();
    int n, x;
    cin >> n >> x;
    vector<int> v, ve;
    for (int i = 0; i <= x; i++)
    {
        int t;
        cin >> t;
        v.push_back(t);
    }
    for (int i = 0; i < v[x]; i++)
    {
        int t;
        cin >> t;
        ve.push_back(t);
    }
    v.pop_back();
    for (int i = 0; i < ve.size(); i++)
    {
        v.push_back(ve[i]);
    }
    sort(v.begin(), v.end());

    int mark = 0;
    int cnt = 0;
    for (int i = 0; i < v.size(); i++)
    {
        if (mark == v[i])
            continue;
        else if (v[i] != v[i + 1])
        {
            cnt++;
            mark = v[i];
        }
    }
    if (cnt == n)
        cout << "I become the guy." << endl;
    else
        cout << "Oh, my keyboard!" << endl;

    return 0;
}