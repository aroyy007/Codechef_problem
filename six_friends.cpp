#include <iostream>
using namespace std;

int main() 
{
    int t;
    cin>>t;
    while(t--)
    {
        int a,b;
        cin>>a>>b;
        if((3*a)<=(2*b))
        {
            cout<<3*a<<endl;
        }
        else
        {
            cout<<2*b<<endl;
        }
    }
	return 0;
}
