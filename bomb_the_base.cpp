#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--)
	{
	    int n,x;
	    cin>>n>>x;
	    int a[n];
	    for(int i=1;i<=n;i++)
	    {
	        cin>>a[i];
	    }
	    int c=0;
	    for(int i=1;i<=n;i++)
	    {
	        if(a[i]<x)
	        {
	            c=i;
	        }
	    }
	    cout<<c<<endl;
	}
	return 0;
}
