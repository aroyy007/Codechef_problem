#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--)
	{
	    int x,y,z;
	    cin>>x>>y>>z;
	    
	    int a=max(max(x,y),z);
	    
	    if(a==x)
	    {
	        cout<<"Setter"<<endl;
	    }
	    
	    else if(a==y)
	    {
	        cout<<"Tester"<<endl;
	    }
	    else
	    {
	        cout<<"Editorialist"<<endl;
	    }
	}
	return 0;
}
