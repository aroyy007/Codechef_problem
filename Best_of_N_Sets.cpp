#include <iostream>

using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int x, y;
        cin >> x >> y;

        
        int n=x+y;
        int diff=abs(x-y);
        int ans=n+diff;
        if (ans%2==0) 
        {
            ans=ans-1;
        } 

        cout << ans << endl;
    }

    return 0;
}
