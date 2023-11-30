#include <iostream>
#include<bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--)
	{
	    int x,n;
	    cin>>x>>n;
	    int d=ceil((double)n/100);
	    int ans = d-x;
	    if(ans<0){
	        cout<<0<<endl;
	    }
	    else
	    {
	        cout<<ans<<endl;
	    }
	    //cout<<d-x<<endl;
	}
	return 0;
}
