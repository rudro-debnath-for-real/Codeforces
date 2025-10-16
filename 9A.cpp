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
    int mx = 7 - (max(n, m));
    if(mx==1)
        cout << 1 << "/" << 6 << endl;
    else if(mx==2)
        cout << 1 << "/" << 3 << endl;
    else if(mx==3)
        cout << 1 << "/" << 2 << endl;
    else if(mx==4)
        cout << 2 << "/" << 3 << endl;
    else if(mx==5)
        cout << 5 << "/" << 6 << endl;
    else if(mx==6)
        cout << 1 << "/" << 1 << endl;

    return 0;
}