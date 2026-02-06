#include <bits/stdc++.h>
using namespace std;

// ---------- Fast I/O ----------
#define optimize()                \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);

// ---------- Shortcuts ----------
#define ll long long
#define ull unsigned long long
#define ld long double
#define pb push_back
#define ff first
#define ss second
#define all(v) v.begin(), v.end()
#define rall(v) v.rbegin(), v.rend()
#define endl '\n'

// ---------- Constants ----------
const int INF = 1e9;
const ll LINF = 1e18;
const int MOD = 1e9 + 7;

// ---------- Debug (optional) ----------
#define debug(x) cerr << #x << " = " << x << endl;

// ---------- Direction Arrays (for grid problems) ----------
int dx[] = {0, 0, 1, -1};
int dy[] = {1, -1, 0, 0};

/*
    observaton:

*/

// ---------- Main Function ----------
void solve()
{
    cout << fixed << setprecision(10);
    int n, l;
    cin >> n >> l;
    vector<int> vec(n);
    for(auto &it:vec) cin >> it;
    sort(vec.begin(),vec.end());
    int mx_len=2*max(vec[0],l-vec[n-1]);
    for(int i = 0; i < n-1; i++)
    {
        mx_len=max(mx_len,vec[i+1]-vec[i]);
    }
    cout <<(double) mx_len/2 << endl;
    
}

int main()
{
    optimize();
    int t = 1;
    // Uncomment next line for multiple test cases
    // cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}
