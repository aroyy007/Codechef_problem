#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--)
	{
	    int x,y;
	    cin>>x>>y;
	    if((x*2)>(y*5))
	    {
	        cout<<"Chocolate"<<endl;
	    }
	    else if((x*2)<(y*5))
	    {
	        cout<<"Candy"<<endl;
	    }
	    else if((x*2)==(y*5))
	    {
	        cout<<"Either"<<endl;
	    }
	}
	return 0;
}
