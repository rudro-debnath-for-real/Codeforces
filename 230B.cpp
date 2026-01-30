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
bool isPrime(long long n)
{
    if(n<2) return false;
    for (ll i = 2; i * i <= n; i++)
    {
        if (n % i == 0)
        {
            return false;
        }
    }
    return true;
}
void solve()
{
    ll n;
    cin >> n;

    long long root = sqrt(n);
    ((root * root == n) && isPrime(root)) ? cout << "YES\n" : cout << "NO\n";
}

int main()
{
    optimize();
    int t = 1;
    // Uncomment next line for multiple test cases
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}
