#include <bits/stdc++.h>
using namespace std;
#define optimize()                \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);

int main()
{
    optimize();
    int n, sum = 0;
    cin >> n;
    string s;
    while(n--)
    {
        cin >> s;
        if (s == "Tetrahedron")
            sum += 4;
        else if (s == "Cube")
            sum += 6;
        else if (s == "Octahedron")
            sum += 8;
        else if (s == "Dodecahedron")
            sum += 12;
        else if (s == "Icosahedron")
            sum += 20;
        }
    cout << sum << endl;

    return 0;
}