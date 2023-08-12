#include <iostream>
using namespace std;

int main() 
{
    int t;
    
    cin >> t;
    
    while (t--) 
    {
        string s;
        cin >> s;
        bool flag = false;
        int x = 0, y = 0;
        
        for (int i = 0; i < s.size(); ++i) 
        {
            if (s[i] == 'a') 
            {
                x++;
                
            } 
            else if (s[i] == 'b') 
            {
                y++;
            }
        }
        
        int ans= min(x,y);
        cout<<ans<<endl;
    }
    
    return 0;
}
