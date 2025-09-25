#include <bits/stdc++.h>
using namespace std;
#define optimize()                \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);

int main()
{
    optimize();
    int a, b, c;
    cin >> a >> b >> c;
    vector<int> v;
    v.push_back(a + b + c);
    v.push_back(a * b * c);
    v.push_back((a + b) * c);
    v.push_back(a + (b * c));
    v.push_back(a * (b + c));
    v.push_back((a * b) + c);
    cout << *max_element(v.begin(), v.end());
    return 0;
}