#include <iostream>
#include<bits/stdc++.h>
using namespace std;
int freq(string s,int n,char a){
    int k=0;
    for(int i=0;i<n;i++){
        if(s[i]==a){
            k++;
        }
    }
    return k;
}
int main() {
	int t;
	cin>>t;
	while(t--)
	{
	    int n;
	    cin>>n;
	    string s;
	    cin>>s;
	    int nz=freq(s,n,'0');
	        int no=freq(s,n,'1');
	        if(nz>=no)
	        {
	            cout<<no<<endl;
	        }
	        else
	        {
	            cout<<nz+1<<endl;
	        }
	    
	}
	return 0;
}
