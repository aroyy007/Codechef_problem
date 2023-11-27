#include <iostream>
#include<bits/stdc++.h>
using namespace std;

int main() {
	int n,e=0,o=0,c=0;
	cin>>n;
	vector<int> a(n);
	for(int i=0;i<n;i++)
	{
	    cin>>a[i];
	    if(a[i]%2==0)
	    {
	        e++;
	    }
	    else
	    {
	        o++;
	    }
	}
	if(e>o)
	{
	    cout<<"READY FOR BATTLE"<<endl;
	}
	else
	{
	    cout<<"NOT READY"<<endl;
	}
	
	return 0;
}
