#include <iostream>
#include<bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--)
    {
        int n,c=0;
        cin>>n;
        string s;
        cin>>s;
        for(int i=0;i<s.size();i++)
        {
            if(s[i]=='a' || s[i]=='e' || s[i]=='o' || s[i]=='i' || s[i]=='u')
            {
                c=0;
                continue;
            }
            else
            {
                c++;
                if(c==4)
                {
                    break;
                }
            }
        }
        if(c<4)
        {
            cout<<"YES"<<endl;
        }
        else
        {
            cout<<"NO"<<endl;
        }
    }
	return 0;
}
