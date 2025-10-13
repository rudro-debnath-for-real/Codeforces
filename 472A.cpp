#include <bits/stdc++.h>
using namespace std;
#define optimize()                \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);

bool isPrime(int n)
{
    if (n <= 1)
    {
        return false;
    }
    bool prime = true;
    for (int i = 2; i <= sqrt(n); i++)
    {
        if (n % i == 0)
        {
            prime = false;
            break;
        }
    }
    if (prime)
        return true;
    else
        return false;
}

int main()
{
    optimize();
    int t;
    cin >> t;

    for (int i = 2; i < t; i++)
    {
        if (isPrime(t - i) == false && isPrime(i) == false)
        {
            cout << i << ' ' << t - i << '\n';
            break;
        }
    }
    return 0;
}