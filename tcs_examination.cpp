#include<bits/stdc++.h>
#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	
	while(t--)
	{
	    int d[3],s[3];
	    for(int i=0;i<3;i++)
	    {
	        cin>>d[i];
	    }
	    for(int i=0;i<3;i++)
	    {
	        cin>>s[i];
	    }
	    
	    int dsum=0,ssum=0;
	    dsum=accumulate(d,d+3,dsum);
	    ssum=accumulate(s,s+3,ssum);
	    
	    if(dsum>ssum)
	    {
	        cout<<"DRAGON"<<endl;
	    }
	    else if(dsum<ssum)
	    {
	        cout<<"SLOTH"<<endl;
	    }
	    else if(dsum==ssum && d[0]>s[0])
	    {
	        cout<<"DRAGON"<<endl;
	    }
	    else if(dsum==ssum && d[0]<s[0])
	    {
	        cout<<"SLOTH"<<endl;
	    }
	    else if(dsum==ssum && d[0]==s[0] && d[1]>s[1])
	    {
	        cout<<"DRAGON"<<endl;
	    }
	    else if(dsum==ssum && d[0]==s[0] && d[1]<s[1])
	    {
	        cout<<"SLOTH"<<endl;
	    }
	    else if(dsum==ssum && d[0]==s[0] && d[1]==s[1])
	    {
	        cout<<"TIE"<<endl;
	    }
	}
	return 0;
}
