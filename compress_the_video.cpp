#include<bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--)
	{
	    int N,temp,sum = 0;
        cin>>N;
        sum = N;
        vector < int > v;
        for(int i=0; i<N; i++)
        {
            cin>>temp;
            v.push_back(temp);
        }
        for(int i=0; i<v.size(); i++)
        {
            if(v[i] == v[i+1])
                sum = sum - 1;

        }
        cout<<sum<<endl;

	}
	return 0;
}
