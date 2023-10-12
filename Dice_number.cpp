#include <iostream>
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int a[3],b[3];
        cin>>a[0]>>a[1]>>a[2]>>b[0]>>b[1]>>b[2];
        sort(a,a+3);
        sort(b,b+3);
        int n1 = a[2]*100 + a[1]*10 + a[0];
        int n2 = b[2]*100 + b[1]*10 + b[0];
        if (n1 > n2)
            cout << "Alice" << endl;
        else if (n1 < n2)
            cout << "Bob" << endl;
        else
            cout << "Tie" << endl;
    }
    return 0;
}
