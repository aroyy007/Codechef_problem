#include <iostream>
using namespace std;

int main() {
	int x;
	cin>>x;
	if(x<3)
	{
	    cout<<"GOLD"<<endl;
	}
	else if(3<=x && x<6)
	{
	    cout<<"SILVER"<<endl;
	}
	else
	{
	    cout<<"BRONZE"<<endl;
	}
	return 0;
}
