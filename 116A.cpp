#include <bits/stdc++.h>
using namespace std;
#define optimize()                \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);

int main()
{
    optimize();
    int n ,temp=0;
    cin >> n;
    vector<int> vec;
    for (int i = 0; i < n; i++)
    {
        int du, bair;
        cin >> du >> bair;
        temp += bair - du;
        vec.push_back(temp);
    }
    // for (int i = 0; i < vec.size(); i++)
    // {
    //     cout << vec[i] << endl;
    // }
    
    int m = *max_element(vec.begin(), vec.end());
    cout << m << endl;
    return 0;
}