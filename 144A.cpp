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
    int cnt = 0;
    cin >> n;
    vector<int> vec;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        vec.push_back(x);
    }

    int mx = *max_element(vec.begin(), vec.end());
    int mn = *min_element(vec.begin(), vec.end());
    int sz_max = 0;
    int cntm = 0;
    for (int i = 0; i < (int)vec.size(); i++)
    {
        if (mx == vec[i])
        {
            sz_max = i;
            break;
        }
    }
    for (int i = sz_max; i >= 0; i--)
    {
        if (vec[i] > vec[i - 1])
        {
            swap(vec[i], vec[i - 1]);
            cntm++;
        }
    }

    int sz_min = 0;
    int cntmin = 0;
    for (int i = 0; i < (int)vec.size(); i++)
    {
        if (mn == vec[i])
            sz_min = i;
    }

    for (int i = sz_min; i < (int)vec.size() - 1; i++)
    {
        if (vec[i] < vec[i + 1])
        {
            swap(vec[i], vec[i + 1]);
            cntmin++;
        }
    }
    cout << cntm + cntmin << endl;
    return 0;
}