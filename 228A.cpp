#include <bits/stdc++.h>
using namespace std;
#define optimize()                \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);

int main()
{
    optimize();
    vector<int> vec(4);
    for (int i = 0; i < 4; i++)
    {
        cin >> vec[i];
    }
    int cnt = 0;
    sort(vec.begin(), vec.end());
    for (int i = 0; i < vec.size(); i++)
    {
        for (int j = i + 1; j < vec.size(); j++)
        {
            if (vec[i] == vec[j])
            {
                cnt++;
                break;
            }
        }
    }
    cout << cnt << "\n";

    return 0;
}