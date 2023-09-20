#include <iostream>
#include<bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--)
	{
	    int l,v1,v2;
	    cin>>l>>v1>>v2;
	    double a = ((double)l/v1);
	    double b = ((double)l/v2);
	    int x= ceil(a);
	    int y= ceil(b);
	    if(abs(x-y)==1)
	    {
	        cout<<0<<endl;
	    }
	    else if(abs(x-y)==0)
	    {
	        cout<<-1<<endl;
	    }
	    else
	    {
	        cout<<(abs(x-y)-1)<<endl;
	    }
	}
	return 0;
}
