#include <bits/stdc++.h>
using namespace std;
#define optimize()                \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);

int main()
{
    optimize();

    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int cnt = 0;
        vector<int> vec(n);
        for (auto &it : vec)
            cin >> it;
        sort(vec.begin(), vec.end());
        vec.erase(unique(vec.begin(), vec.end()), vec.end());

        while ((int)vec.size() != 1)
        {
            if (abs(vec[0] - vec[1]) == 1)
            {
                vec.erase(vec.begin());
            }
            else
            {
                break;
            }
        }

        if (vec.size() == 1)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }

    return 0;
}
