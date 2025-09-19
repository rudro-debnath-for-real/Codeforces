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
    vector<double> vec;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        vec.push_back(x);
    }
    double sum = 0;
    for (int i = 0; i < vec.size(); i++)
    {
        sum += vec[i];
    }
    double half = sum / 2;
    sort(vec.begin(), vec.end());
    // reverse(vec.begin(), vec.end());

    double tsum = 0, cnt = 0;

    for (int i = 0; i < vec.size(); i++)
    {
        if (tsum < half)
        {
            tsum += vec[i];
            cnt++;
        }
    }
    int size = vec.size() + 1;
    cout << size - cnt;

    return 0;
}