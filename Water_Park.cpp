#include <iostream>
using namespace std;

int main() {
	int w,h;
	cin>>w>>h;
	if (h <= 130 && w >= 60) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }
	return 0;
}
