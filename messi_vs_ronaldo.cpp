#include <iostream>
using namespace std;

int main() 
{
	int a,b,x,y;
	cin>>a>>b>>x>>y;
	if(((a*2)+(b*1))==((x*2)+(y*1)))
	{
	    cout<<"EQUAL"<<endl;
	}
	else if(((a*2)+(b*1))>((x*2)+(y*1)))
	{
	    cout<<"Messi"<<endl;
	}
	else if(((a*2)+(b*1))<((x*2)+(y*1)))
	{
	    cout<<"Ronaldo"<<endl;
	}
	return 0;
}
