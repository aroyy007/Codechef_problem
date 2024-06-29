#include <iostream>

#include <vector>

#include <algorithm>

using namespace std;

#define optimize()\
ios_base::sync_with_stdio(0);\
cin.tie(0);\
cout.tie(0);
#define fraction()\
cout.unsetf(ios::floatfield);\
cout.precision(10);\
cout.setf(ios::fixed, ios::floatfield);

typedef vector < int > vi;
#define ain(A, NN)\
for (int I = 0; I < NN; I++)\
    cin >> A[I]

int main()
{
    optimize();

    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vi a(n);
        ain(a, n);
        sort(a.begin(), a.end());

        int x = 1;
        bool valid = true;

        for (int i = 0; i < n; i++)
        {
            if (a[i] == x)
            {
                x++;
            }
            else {
                if (a[i] > x)
                {
                    cout << "NO" << endl;
                    valid = false;
                    break;
                }
                x++;
            }
        }

        if (valid)
        {
            cout << "YES" << endl;
        }
    }

    return 0;
}
