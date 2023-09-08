#include <iostream>
using namespace std;

int main() 
{
    int t;
    cin >> t;
    while (t--) 
    {
        int n, b;
        cin >> n >> b;
        int max_area = -1; 
        for (int i = 0; i < n; i++) 
        {
            int w, h, p;
            cin >> w >> h >> p;
            if (p <= b) 
            { 
                int area = w * h; 
                if (area > max_area) 
                {
                    max_area = area; 
                    
                }
            }
        }
        if (max_area == -1) 
        {
            cout << "no tablet" << endl;
        } 
        else 
        {
            cout << max_area << endl;
        }
    }
    return 0;
}
