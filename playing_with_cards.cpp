#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--)
	{
	    int a,b;
	    cin>>a>>b;
	    int c=a+b;
	    int count=0;
	    string d = to_string(c);
	    for(int i=0;i<d.size();++i)
	    {
	        if(d[i]=='0')
	        {
	            count=count+6;
	        }
	        else if(d[i]=='1')
	        {
	            count=count+2;
	        }
	        else if(d[i]=='2')
	        {
	            count=count+5;
	        }
	        else if(d[i]=='3')
	        {
	            count=count+5;
	        }
	        else if(d[i]=='4')
	        {
	            count=count+4;
	        }
	        else if(d[i]=='5')
	        {
	            count=count+5;
	        }
	        else if(d[i]=='6')
	        {
	            count=count+6;
	        }
	        else if(d[i]=='7')
	        {
	            count=count+3;
	        }
	        else if(d[i]=='8')
	        {
	            count=count+7;
	        }
	        else if(d[i]=='9')
	        {
	            count=count+6;
	        }
	     }
	     cout<<count<<endl;
	}
	return 0;
}
