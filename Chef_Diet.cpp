#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--)
	{
	    int n,k;
	    cin>>n>>k;
	    int a[n];
	    for(int i=0;i<n;i++)
	    {
	        cin>>a[i];
	    }
	    int d=0,g=0;
	    for(int i=0;i<n;i++)
	    {
	        if(d+a[i]>=k)
	        {
	            d+=a[i]-k;
	        }
	        else if(g==0)
	        {
	            g=i+1;
	        }
	    }
	    if(g>0)
	    cout<<"NO "<<g<<endl;
	    else
	    cout<<"YES"<<endl;
	}
	return 0;
}
