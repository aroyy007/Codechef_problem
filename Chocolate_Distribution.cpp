#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--)
	{
	    int n;
	    cin>>n;
	    
	    if(n%2==0)
	    {
	        int a=1;
	        int b=1;
	        int c=n-2;
	    
	        cout<<a<<" "<<b<<" "<<c<<endl;
	    }
	    else
	    {
	        int a=1;
	        int b=(n-1)/2;
	        int c=(n-1)/2;
	    
	        cout<<a<<" "<<b<<" "<<c<<endl;
	    }
	    
	}
	return 0;
}
