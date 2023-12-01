#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<int> a(n);
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        int c = 1, mini = INT_MAX, maxi = INT_MIN;
        for (int i = 0; i < n - 1; i++)
        {
            if (abs(a[i + 1] - a[i]) <= 2)
            {
                c++;
            }
            else
            {
                mini = min(mini, c);
                maxi = max(maxi, c);
                c = 1;
            }
        }
        mini = min(mini, c);
        maxi = max(maxi, c);
        cout << mini << ' ' << maxi << '\n';
    }
    return 0;
}
