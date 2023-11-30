#include <iostream>
#include <bits/stdc++.h>
using namespace std;

bool isPrime(int n)
{
    if (n <= 1)
    {
        return false;
    }
    for (int i = 2; i <= sqrt(n); i++)
    {
        if (n % i == 0)
        {
            return false;
        }
    }
    return true;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int T;
    cin >> T;

    while (T--)
    {
        int H;
        cin >> H;

        int moves = 0;
        int attackPower = 1;

        while (H > 0)
        {
            if (isPrime(H))
            {
                H=0;
                moves++;
                break;
            }
            else
            {
                H -= attackPower;
                
                attackPower *= 2;
                moves++;
            }
        }

        if (H != 0)
        {
            cout << "-1"<< endl;
        }
        else
        {
            cout << moves << endl;
        }
    }

    return 0;
}
