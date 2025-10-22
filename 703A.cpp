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
    int cnt_Mishka = 0, cnt_Chris = 0;
    while (n--)
    {
        int a, b;
        cin >> a >> b;
        if (a > b)
            cnt_Mishka++;
        else if (a < b)
            cnt_Chris++;
    }
    if (cnt_Chris > cnt_Mishka)
        cout << "Chris" << '\n';
    else if (cnt_Mishka > cnt_Chris)
        cout << "Mishka" << '\n';
    else
        cout << "Friendship is magic!^^" << '\n';
    return 0;
}