#include <iostream>
#include<bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	
	while(t--)
	{
	    int n,k,sum=0;
	    cin>>n>>k;
	    
	    int a[n];
	    //char s[n];
	    for(int i=0;i<n;i++)
	    {
	        cin>>a[i];
	    }
	    
	    for(int i= 0;i<n;i++)
	    {
	        //sum=sum+a[i];
	        if(a[i]<=k)
	        {
	            cout<<"1";
	            k-=a[i];
	        }
	        else
	        {
	            cout<<"0";
	        }
	    }
	    
	    cout<<endl;
	}
	return 0;
}
