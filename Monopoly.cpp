#include <iostream>
#include<bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--)
	{
	    vector<int> a(4);
	    for(int i=0;i<4;i++)
	    {
	        cin>>a[i];
	    }
	    sort(a.begin(),a.end());
	    int sum = a[0]+a[1]+a[2];
	    if(sum>=a[3])
	    {
	        //cout<<"YES"<<endl;
	        cout<<"NO"<<endl;
	    }
	    else
	    {
	        //cout<<"NO"<<endl;
	        cout<<"YES"<<endl;
	    }
	    
	}
	return 0;
}
