#include <iostream>
#include<bits/stdc++.h>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        string s;
        cin>>s;
        bool ind = 0;
        bool fore = 0;
        for(int i=0;i<n;i++)
        {
            if(s[i]=='Y')
            {
                fore=1;
            }
            else if(s[i]=='I')
            {
                ind=1;
            }
        }
        if(ind)
        {
            cout<<"INDIAN"<<endl;
        }
        else if(fore)
        {
            cout<<"NOT INDIAN"<<endl;
        }
        else
        {
            cout<<"NOT SURE"<<endl;
        }
    }
	return 0;
}
