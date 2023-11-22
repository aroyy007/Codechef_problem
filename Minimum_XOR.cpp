#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int findXOR(const vector<long long> &arr)
{
    long long result = 0;
    for (long long num : arr)
    {
        result ^= num;
    }
    return result;
}

int main()
{
    long long n;
    cin >> n;
    while (n--)
    {
        int t;
        cin >> t;
        vector<long long> a(t);

        for (int i = 0; i < t; i++)
        {
            cin >> a[i];
        }

        long long l = a[0];
        for (int i = 1; i < a.size(); i++)
        {
            l ^= a[i];
        }

        long long mini = l;
        for (int i = 0; i < a.size(); i++)
        {
            long long n1 = l ^ a[i];
            mini = min(mini, n1);
        }

        cout << mini << endl;
    }

    return 0;
}
