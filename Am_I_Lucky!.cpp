#include <iostream>
#include<bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--)
	{
	    int n, x, k;
        cin >> n >> x >> k;
        int y = n - x;
        int a = x % k;
        int b = y % k;
        cout << abs(a - b) << endl;
	    
	    
	}
	return 0;
}
