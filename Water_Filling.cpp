#include <iostream>
#include<bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--)
	{
	    vector<int>a(3);
	    for(int i=0;i<3;i++)
	    {
	        cin>>a[i];
	    }
	    sort(a.begin(),a.end());
	    if(a[0]==0 && a[1]==0)
	    {
	        cout<<"Water filling time"<<endl;
	    }
	    else
	    {
	        cout<<"Not now"<<endl;
	    }
	}
	return 0;
}
