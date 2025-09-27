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
    vector<int> vec(n);
    for (int &t : vec)
        cin >> t;

    int pos_e = -1, pos_o = -1;
    int cnte = 1, cnto = 1;

    for (int i = 0; i < n; i++)
    {
        if (vec[i] % 2 == 0)
        {
            pos_e = i;
            cnte++;
        }
        else
        {
            pos_o = i;
            cnto++;
        }
    }
    if (cnte<cnto)
        cout << pos_e + 1 << endl;
    else
        cout << pos_o + 1 << endl;

    return 0;
}