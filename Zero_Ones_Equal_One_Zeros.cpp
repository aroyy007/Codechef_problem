#include <iostream>
#include<bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--)
	{
	    int n;
	    cin>>n;
	    
	    //string s[n]="";
	    //string a="10";
	    //string b="01";
	    
	    for(int i=0;i<n;i++)
	    {
	        if(i==0 || i==n-1)
	        {
	            cout<<"0";
	        }
	        else
	        {
	            cout<<"1";
	        }
	    }
	    cout<<endl;
	}
	return 0;
}
