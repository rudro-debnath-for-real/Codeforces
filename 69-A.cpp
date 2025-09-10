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
    int array[n][3];
    vector<int> sum;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cin >> array[i][j];
        }
    }
    int s = 0;
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < n; j++)
        {
            s = s + array[j][i];
        }
        sum.push_back(s);
        s = 0;
    }
    // for (int i = 0; i < sum.size(); i++)
    // {
    //     cout << sum[i] << endl;
    // }

    if (sum[0] == 0 && sum[1] == 0 && sum[2] == 0)
    {
        cout << "YES" << endl;
    }
    else
        cout << "NO" << endl;

    return 0;
}