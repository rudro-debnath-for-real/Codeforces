#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, m;
    cin >> n >> m;
    int cnt = 0;
    int i = 1;
    while (1)
    {
        int t = n * i;
        cnt++;
        if (t % 10 == 0)
        {

            cout << cnt << endl;
            break;
        }
        else if (t % 10 == m)
        {
            cout << cnt << endl;
            break;
        }
        i++;
    }
}
