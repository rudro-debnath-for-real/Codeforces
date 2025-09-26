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
    vector<pair<string, string>> p(n);
    for (auto &x : p)
        cin >> x.first >> x.second;
    sort(p.begin(), p.end());
    p.erase(unique(p.begin(), p.end()), p.end());

    cout << p.size() << endl;

    return 0;
}