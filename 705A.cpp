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
    string h = "I hate";
    string l = "I love";
    string t = "that";
    for (int i = 1; i <= n; i++)
    {
        if (i % 2 != 0)
            cout << " " << h;
        else
            cout << " " << l;
        if (i < n)
            cout << " " << t;
    }
    cout << " " << "it" << endl;

    return 0;
}