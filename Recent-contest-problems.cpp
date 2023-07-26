#include <iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, count = 0, c = 0;
        cin >> n;
        string arr[n];
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
            if (arr[i] == "START38")
            {
                count++;
            }
            else
                c++;
        }

        cout << count << " " << c << endl;
    }

    return 0;
}
