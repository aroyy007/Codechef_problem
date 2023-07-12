#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--)
	{
	    int a,b,c;
	    cin>>a>>b>>c;
	    if(a==max(max(a,b),c))
	    {
	        cout<<"Alice"<<endl;
	    }
	    else if(b==max(max(a,b),c))
	    {
	        cout<<"Bob"<<endl;
	    }
	    else if(c==max(max(a,b),c))
	    {
	        cout<<"Charlie"<<endl;
	    }
	}
	return 0;
}
