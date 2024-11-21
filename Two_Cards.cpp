#include <iostream>

#include <vector>

#include <algorithm>

using namespace std;


typedef pair < int, int > pii;


bool check(vector < pii > & p, int n) {
    for (int i = 0; i < n; i++) {
        if (i == 0) {

            if (max(p[i].first, p[i].second) > max(p[1].first, p[1].second)) {
                return true;
            }
        }
        else if (max(p[i].first, p[i].second) > max(p[0].first, p[0].second)) {
                return true;
    }
}
return false;
}

int main() {
    

    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;

        vector < int > a(n), b(n);
        vector < pii > p;


        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }
        for (int i = 0; i < n; i++) {
            cin >> b[i];
        }


        for (int i = 0; i < n; i++) {
            p.push_back({
                a[i],
                b[i]
            });
        }


        sort(p.rbegin(), p.rend());


        if (!check(p, n))
            cout << "NO" << endl;
        else
            cout << "YES" << endl;
    }

    return 0;
}
