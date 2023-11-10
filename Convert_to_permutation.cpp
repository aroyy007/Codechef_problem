#include <iostream>
#include<bits/stdc++.h>
using namespace std;
int sum_N(int n)
{
    int sum=0;
    for(int i=1;i<=n;i++)
    {
        sum=sum+i;
    }
    return sum;
}
int solve(vector<int>&a, int n)
{
    int sum=0;
	    //sum=accumulate(a,a+n,sum);
	    //int old_Sum=sum_N(n);
	    for (int i = 0; i < n; i++) 
	    {
            if (a[i] > i + 1) 
            {
                return -1; 
            }
            sum += (i + 1 - a[i]);
        }
        return sum;
}
int main() {
	int t;
	cin>>t;
	while(t--)
	{
	    int n;
	    cin>>n;
	    vector<int> a(n);
	    for(int i=0;i<n;i++){
	        cin>>a[i];
	    }
	    sort(a.begin(),a.end());
	    
        cout<<solve(a,n)<<endl;
	}
	return 0;
}
