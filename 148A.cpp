#include <bits/stdc++.h>
using namespace std;
#define optimize()                \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);

int main()
{
    optimize();
    int k, l, m, n, o;
    cin >> k >> l >> m >> n >> o;
    vector<int> vec;
    for (int i = 1; i <= o; i++)
    {
        int w = k * i;
        if (w > o)
            break;
        vec.push_back(w);
    }
    for (int i = 1; i <= o; i++)
    {
        int x = l * i;
        if (x > o)
            break;
        vec.push_back(x);
    }
    for (int i = 1; i <= o; i++)
    {
        int y = m * i;
        if (y > o)
            break;
        vec.push_back(y);
    }
    for (int i = 1; i <= o; i++)
    {
        int z = n * i;
        if (z > o)
            break;
        vec.push_back(z);
    }

    sort(vec.begin(), vec.end());
    vec.erase(unique(vec.begin(), vec.end()), vec.end());
    cout << (int)vec.size() << endl;

    return 0;
}