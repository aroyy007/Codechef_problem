#include <iostream>
using namespace std;

int main() {
	int r;
	cin>>r;
	if(1<=r && r<=50)
	{
	    cout<<100<<endl;
	}
	else if(51<=r && r<=100)
	{
	    cout<<50<<endl;
	}
	else
	{
	    cout<<0<<endl;
	}
	return 0;
}
