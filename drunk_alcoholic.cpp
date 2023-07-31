#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--)
	{
	    int k,d=0;
	    cin>>k;
	    for(int i=1;i<=k;i++)
	    {
	        if(i%2!=0)
	        {
	            d=d+3;
	        }
	        else if(i%2==0)
	        {
	            d=d-1;
	        }
	    }
	    cout<<d<<endl;
	}
	return 0;
}
