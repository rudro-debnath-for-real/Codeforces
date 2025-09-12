#include <bits/stdc++.h>
using namespace std;
#define optimize()                \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);

int main()
{
    optimize();
    int y, k = 0;
    cin >> y;

    while (1)
    {
        y++;
        int t = y;
        int temp = y;
        int sz = 0;
        while (t != 0)
        {
            t = t / 10;
            sz++;
        }
        vector<int> vec(sz);
        for (int i = 0; i < vec.size(); i++)
        {
            vec[i] = temp % 10;
            temp = temp / 10;
        }
        sort(vec.begin(), vec.end());
        int ck = 0;
        int v = vec.size();
        for (int i = 0; i < v; i++)
        {
            if (vec[i] != vec[i + 1])
                ck++;
        }

        if (ck == vec.size())
        {
            cout << y << endl;
            break;
        }
    }

    return 0;
}