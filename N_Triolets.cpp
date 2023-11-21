#include <iostream>
#include <bits/stdc++.h>
using namespace std;
void solve()
{
    int n, c = 0;
    cin >> n;

    for (int i = 2; i < sqrt(n); i++)
    {
        if (n % i == 0)
        {
            cout << i << " " << n / i << " " << 1 << endl;
            return;
        }
    }
    if (n <= 3)
    {
        cout << -1 << endl;
        return;
    }
}

int main()
{
    long t;
    cin >> t;

    while (t--)
    {

        solve();

        // cout << -1 << endl;
    }

    return 0;
}
