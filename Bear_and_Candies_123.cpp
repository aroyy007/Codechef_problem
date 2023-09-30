#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--)
	{
	    int a,b,c=1;
	    cin>>a>>b;
	    
	    while(1)
	    {
	        a = a - c;
	        if(a<0)
	        {
	            cout<<"Bob\n";
	            break;
	        }
	        else
	        {
	            c++;
	        }
	        b = b - c;
	        if(b<0)
	        {
	            cout<<"Limak\n";
	            break;
	        }
	        else
	        {
	            c++;
	        }
	    }
	}
	return 0;
}
