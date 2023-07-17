#include <iostream>
using namespace std;

int main() 
{
	int t;
	cin>>t;
	while(t--)
	{
	    string s,t,m;
	    cin>>s>>t;
	    for(int i=0;i<5;i++)
	    {
	        if(s[i]==t[i])
	        {
	            m="G";
	        }
	        else
	        {
	            m="B";
	        }
	    }
	    cout<<m<<endl;
	}
	return 0;
}
