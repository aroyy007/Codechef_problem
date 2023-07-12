#include <iostream>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--)
    {
        int a,b,c;
        cin>>a>>b;
        if(((a+b)%2)==0)
        {
            cout<<"YES"<<endl;
        }
        else if(((a+b)%2)!=0)
        {
            cout<<"NO"<<endl;
        }
    }
	return 0;
}
