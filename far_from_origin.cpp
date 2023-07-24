#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int a,b,c,d;
        cin>>a>>b>>c>>d;
        double x1=sqrt(a*a+b*b);
        double x2=sqrt(c*c+d*d);
        if(x1>x2)
        {
            cout<<"ALEX"<<endl;
        }
        else if(x1==x2)
        {
            cout<<"EQUAL"<<endl;
        }
        else if(x1<x2)
        {
            cout<<"BOB"<<endl;
        }
    }
}
