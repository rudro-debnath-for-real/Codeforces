#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    char w[101];
    for (int i = 0; i < n; i++)
    {
        cin >> w;
        int len = strlen(w);
        if (len > 10)
        {
            cout << w[0] << len - 2 << w[len - 1] << endl;
        }
        else
        {
            cout << w << endl;
        }
    }

    return 0;
}