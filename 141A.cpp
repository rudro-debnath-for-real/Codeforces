#include <bits/stdc++.h>
using namespace std;
#define optimize()                \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);

int main()
{
    optimize();
    string guest, host, pile;
    cin >> guest >> host >> pile;
    string marge = guest + host;
    // cout << marge << endl;
    sort(marge.begin(), marge.end());
    sort(pile.begin(), pile.end());
    if (marge == pile)
        cout << "YES";
    else
        cout << "NO";

    return 0;
}