#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--)
	{
	    int x,y;
	    cin>>x>>y;
	    int a= x/y;
	    if(a>20)
	    {
	        cout<<20<<endl;
	    }
	    else
	    {
	        cout<<x/y<<endl;
	    }
	    
	}
	return 0;
}
