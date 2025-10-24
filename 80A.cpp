#include <bits/stdc++.h>
using namespace std;
#define optimize()                \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);

bool prime(int n)
{
    bool isprime = true;
    for (int i = 2; i <= sqrt(n); i++)
    {
        if (n % i == 0)
            isprime = false;
    }
    return isprime;
}

int main()
{
    optimize();
    int n, m;
    cin >> n >> m;
    int nextPrime = 0;
    if (prime(m) == true)
    {
        for (int i = n + 1; i <= m; i++)
        {
            if (prime(i) == true)
            {
                nextPrime = i;
                break;
            }
        }
        if(nextPrime==m)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
        return 0;
    }
    else if (prime(m) == false)
        cout << "NO" << endl;

    return 0;
}