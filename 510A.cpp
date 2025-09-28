#include <bits/stdc++.h>
using namespace std;
#define optimize()                \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);

int main()
{
    optimize();
    int n, m;
    cin >> n >> m;
    int k = 0;
    vector<vector<char>> vec(n, vector<char>(m));
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (i % 2 == 0)
            {
                vec[i][j] = '#';
            }
            else if (j == 0 && i % 4 == 3)
            {
                vec[i][j] = '#';
            }
            else if (i % 4 == 1 && j == m - 1)
            {
                vec[i][j] = '#';
            }
            else
            {
                vec[i][j] = '.';
            }
        }
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cout << vec[i][j];
        }
        cout << endl;
    }

    return 0;
}