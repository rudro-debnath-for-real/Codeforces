#include <bits/stdc++.h>
using namespace std;
#define optimize()                \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);

int main()
{
    optimize();
    int n = 8;
    vector<int> vec(n);
    for (auto &it : vec)
        cin >> it;
    int drink = vec[1] * vec[2];
    int toast1 = drink / vec[6];
    int toast2 = vec[3] * vec[4];
    int toast3 = vec[5] / vec[7];
    int ans = min(min(toast1, toast2), toast3) / vec[0];
    cout << ans << endl;
    return 0;
}