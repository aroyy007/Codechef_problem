#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--)
    {
        int n, max = INT_MIN, c;
        cin>>n;
        int a[n];
        for(int i=0; i<n; i++)
        {
            cin>>a[i];
        }
        for(int i=0; i<n; i++)
        {
            for(int j=i; j<n; j++)
            {
                if(a[i] == a[j])
                {
                    c++;
                }
            }
            if(max < c)
            {
                max = c;
            }
            c = 0;
        }
        cout<<n-max<<endl;
    }
    
    return 0;
}


