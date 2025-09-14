#include <bits/stdc++.h>
using namespace std;
#define optimize()                \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);

int main()
{
    optimize();
    int n, t;
    cin >> n >> t;
    string s;
    cin >> s;

    /*have to tried many times.
    First I've made mistake to increase i+=2 when not every
    time matching the condition to be swaped . when two char swaped at that time have to
    increase i to 1 so that it don't the check the swaped char*/

    while (t--)
    {
        for (int i = 0; i < n - 1; i++)
        {
            if (s[i] == 'B' && s[i + 1] == 'G')
            {
                swap(s[i], s[i + 1]);
                i++;
            }
        }
    }
    cout << s << endl;

    return 0;
}