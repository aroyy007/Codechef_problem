#include <iostream>
using namespace std;

int main() {
	int p[4],c=0;
	for(int i=0;i<4;i++)
	{
	    cin>>p[i];
	}
	for(int i=0;i<4;i++)
	{
	    if(p[i]>=10)
	    {
	        c++;
	    }
	}
	cout<<c<<endl;
	return 0;
}
