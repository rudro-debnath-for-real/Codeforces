#include <bits/stdc++.h>
using namespace std;

int main()
{
    char a[101], b[101];
    cin.getline(a, 101);
    cin.getline(b, 101);
    int x = strlen(a);

    for (int i = 0; i < x; i++)
    {
        char ca = tolower(a[i]);
        char cb = tolower(b[i]);
        if (ca < cb)
        {
            cout << "-1" << endl;
            return 0;
        }
        else if (ca > cb)
        {
            cout << "1" << endl;
            return 0;
        }
    }
    cout << "0" << endl;
    return 0;
}