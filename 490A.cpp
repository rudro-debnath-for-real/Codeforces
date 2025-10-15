#include <bits/stdc++.h>
using namespace std;
#define optimize()                \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);

int main()
{
    optimize();

    int t;
    cin >> t;
    vector<int> vec(t);
    int cnt1 = 0, cnt2 = 0, cnt3 = 0;
    for (int i = 0; i < t; i++)
    {
        cin >> vec[i];
        if (vec[i] == 1)
            cnt1++;
        else if (vec[i] == 2)
            cnt2++;
        else if (vec[i] == 3)
            cnt3++;
    }
    int mn = min(min(cnt1, cnt2), cnt3);

    if (mn == 0)
    {
        cout << mn << endl;
        return 0;
    }
    else
        cout << mn << endl;

    while (mn--)
    {
        int cnt = 0;
        int fg1 = 0, fg2 = 0, fg3 = 0;
        for (int i = 0; i < vec.size(); i++)
        {
            if (cnt == 3)
                break;
            if (vec[i] == 1 && fg1 != 1)
            {
                cout << i + 1 << ' ';
                cnt++;
                fg1 = 1;
                vec[i] = 0;
            }
            else if (vec[i] == 2 && fg2 != 2)
            {
                cout << i + 1 << ' ';
                cnt++;
                fg2 = 2;
                vec[i] = 0;
            }
            else if (vec[i] == 3 && fg3 != 3)
            {
                cout << i + 1 << ' ';
                cnt++;
                fg3 = 3;
                vec[i] = 0;
            }
        }
        cout << endl;
    }

    return 0;
}