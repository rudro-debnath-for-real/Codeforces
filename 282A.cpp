#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, count = 0;
    string a1 = "X++";
    string b1 = "--X";
    string a2 = "++X";
    string b2 = "X--";
    char x[4];
    char y[4];
    cin >> n;

    for (int i = 1; i <= n; i++)
    {
        cin >> x;

        if (x == a1 || x == a2)
        {
            count++;
        }
        else if (x == b1 || x == b2)
        {
            count--;
        }
    }
    cout << count << endl;

    return 0;
}