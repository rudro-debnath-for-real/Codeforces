#include <bits/stdc++.h>
using namespace std;
#define optimize()                \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);

int main()
{
    optimize();
    int n, h, cnt = 0;
    cin >> n >> h;
    vector<int> a;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        a.push_back(x);
    }
    for (int i = 0; i < n; i++)
    {
        if (a[i] > h)
            cnt += 2;
        else
            cnt++;
    }
    cout << cnt << endl;

    return 0;
}