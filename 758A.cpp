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
    vector<int> vec(n);
    for (auto &it : vec)
        cin >> it;
    int mx = *max_element(vec.begin(), vec.end());
    int sum = 0;
    for (int i = 0; i < vec.size(); i++)
    {
        sum += abs(vec[i] - mx);
    }
    cout << sum << endl;

    return 0;
}