#include <bits/stdc++.h>
using namespace std;

int main() 
{
	int t;
	cin>>t;
	while(t--)
	{
	    int n;
	    cin>>n;
	    int a[n],b[n];
	    int sa=0,sb=0;
	    for(int i=0;i<n;i++)
	    {
	        cin>>a[i];
	        sa=sa+a[i];
	    }
	    sort(a,a+n);
	    sa=sa-a[n-1];
	    for(int i=0;i<n;i++)
	    {
	        cin>>b[i];
	        sb=sb+b[i];
	    }
	    sort(b,b+n);
	    sb=sb-b[n-1];
	    if(sa>sb)
	    {
	        cout<<"Bob"<<endl;
	    }
	    else if(sa<sb)
	    {
	        cout<<"Alice"<<endl;
	    }
	    else if(sa==sb)
	    {
	        cout<<"Draw"<<endl;
	    }
	    
	}
	return 0;
}
