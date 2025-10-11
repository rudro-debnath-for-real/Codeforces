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
    while (n--)
    {
        int t;
        cin >> t;
        vector<int> vec(t);
        for (auto &it : vec)
            cin >> it;
        vector<int> v = vec;
        sort(vec.begin(), vec.end());
        int m;
        for (int i = 0; i < (int)vec.size(); i++)
        {
            if(vec[i]!=vec[i+1]&&vec[i+1]==vec[i+2])
            {
                m = vec[i];
                break;
            }
            else if (vec[i] != vec[i + 1])
            {
                m = vec[i + 1];
                break;
            }
            
        }


        for (int i = 0; i < (int)v.size(); i++)
        {
            if(m==v[i]) 
            {
                cout << i+1 << endl;
                break;
            }
        }
    }

    return 0;
}