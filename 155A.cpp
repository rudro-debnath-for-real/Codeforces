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
    int max = vec[0], min = vec[0], cnt = 0;
    for (int i = 1; i < (int)vec.size(); i++)
    {
        if (max < vec[i])
        {
            cnt++;
            max = vec[i];
        }
        else if (min > vec[i])
        {
            cnt++;
            min = vec[i];
        }
    }
    cout << cnt << endl;

    return 0;
}