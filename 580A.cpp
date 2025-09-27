#include <bits/stdc++.h>
using namespace std;
#define optimize()                \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);

int main()
{
    optimize();
    int n, cnt = 1;
    cin >> n;
    vector<int> vec(n), v;
    for (auto &t : vec)
        cin >> t;
    for (int i = 0; i < (int)vec.size(); i++)
    {
        v.push_back(cnt);
        if (vec[i] <= vec[i + 1])
        {
            cnt++;
        }
        else
            cnt = 1;
    }
    cout << *max_element(v.begin(), v.end()) << endl;

    return 0;
}