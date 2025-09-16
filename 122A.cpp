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
    int t = n;
    vector<int> vec;
    while (n != 0)
    {
        vec.push_back(n % 10);
        n = n / 10;
    }
    int cnt = 0;
    for (int i = 0; i < vec.size(); i++)
    {
        if (vec[i] == 4 || vec[i] == 7)
        {
            cnt++;
        }
    }

    if (cnt == vec.size())
        cout << "YES" << endl;
    else
    {

        if (t % 4 == 0 || t % 7 == 0 || t % 47 == 0 || t % 74 == 0)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
    return 0;
}