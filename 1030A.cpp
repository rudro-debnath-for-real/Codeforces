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
    vector<int> vec;
    while (n--)
    {
        int x;
        cin >> x;
        vec.push_back(x);
    }
    int out = 0;
    for (int i = 0; i < vec.size(); i++)
    {
        if (vec[i] == 1)
        {
            cout << "HARD" << endl;
            return 0;
        }
        else
            out = 1;
    }
    if (out)
        cout << "EASY" << endl;

    return 0;
}