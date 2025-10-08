#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n = 4;
    vector<int> vec(n);
    for (auto &it : vec)
    {
        cin >> it;
    }
    int max = *max_element(vec.begin(), vec.end());
    int a;
    for (int i = 0; i < n; i++)
    {
        if (vec[i] != max)
        {
            a = max - vec[i];
            cout << a << ' ';
        }
    }
}
