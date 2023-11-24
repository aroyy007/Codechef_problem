#include<bits/stdc++.h>
#include <iostream>
using namespace std;
int bitwiseOR(const vector<int>& arr) {
    int result = 0;
    for (int num : arr) {
        result |= num;
    }
    return result;
}

int main() {
	ios::sync_with_stdio(false);
	cin.tie(nullptr), std::cout.tie(nullptr);
	
	int t;
	cin>>t;
	while(t--)
	{
	    int n,y;
	    cin>>n>>y;
	    vector<int> a(n);
	    for(int i=0;i<n;i++)
	    {
	        cin>>a[i];
	    }
	    bool flag = false;
	    int OR = bitwiseOR(a);
	    for(int i=0;i<=y;i++)
	    {
	        if((OR|i)==y){
	            cout<<i<<endl;
	            flag = true;
	            break;
	            }
	    }
	    if(!flag)
	    {
	        cout<<-1<<endl;
	    }
    }
	
	return 0;
}
