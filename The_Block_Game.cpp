#include <iostream>
#include<bits/stdc++.h>

using namespace std;

bool check_palindrome(string s)
{
  string a = s;
  reverse(a.begin(), a.end());
  if (s == a)
  {
    return true;
  }
  else
  {
    return false;
  }
}



int main() {
	int t;
	cin>>t;
	while(t--)
	{
	    int n;
	    cin>>n;
	    string s = to_string(n);
	    if(check_palindrome(s))
	    {
	        cout<<"wins"<<endl;
	    }
	    else
	    {
	        cout<<"loses"<<endl;
	    }
	}
	return 0;
}
