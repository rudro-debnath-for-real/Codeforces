#include <bits/stdc++.h>
using namespace std;
#define optimize()                \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);

int main()
{
    optimize();
    string s;
    getline(cin,s);
    sort(s.begin(), s.end());
    s.erase(unique(s.begin(), s.end()),s.end());
    int cnt = 0;
    for (int i = 0; i < s.size(); i++)
    {
        if(s[i]>='a'&& s[i]<='z')
            cnt++;
    }
    cout << cnt << endl;
    return 0;
}