#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--)
	{
	    int x,y;
	    cin>>x>>y;
	    if(x>=y)
	    {
	        cout<<y<<endl;
	    }
	    else if(y>x)
	    {
	        cout<<(x+((y-x)*2))<<endl;
	    }
	}
	return 0;
}
