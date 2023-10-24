#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--)
	{
	    int x,n;
	    cin>>n>>x;
	    string ans="YES";
	    
	    if(x%2==0 && (n%2)!=0)
	        ans="NO";
	        
	   cout<<ans<<endl;
	}
	return 0;
}
