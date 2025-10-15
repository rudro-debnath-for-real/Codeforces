#include <bits/stdc++.h>
using namespace std;
#define optimize()                \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);

int main()
{
    optimize();

    int n, k;
    cin >> n >> k;
    vector<int> vec;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        if ((5 - x) >= k)
            vec.push_back(x);
    }
    cout << (int)vec.size() / 3 << endl;

    return 0;
}