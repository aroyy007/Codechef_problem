#include <iostream>
using namespace std;

int main() 
{
	int t;
	cin>>t;
	while(t--)
	{
	    int w,x,y,z;
	    cin>>w>>x>>y>>z;
	    
	    int a = w+z*(x-y);
	    cout<<a<<endl;
	}
	return 0;
}
