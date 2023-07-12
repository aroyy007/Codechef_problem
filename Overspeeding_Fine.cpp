#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--)
	{
	    int x;
	    cin>>x;
	    if(x<=70)
	    {
	        cout<<0<<endl;
	    }
	    else if(70<x && x<=100)
	    {
	        cout<<500<<endl;
	    }
	    else
	    {
	        cout<<2000<<endl;
	    }
	}
	return 0;
}
