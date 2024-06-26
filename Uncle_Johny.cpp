#include <iostream>
#include <bits/stdc++.h>
#include <algorithm>
#include <vector>
#include <stdlib.h>
#include <time.h>
using namespace std;
#define optimize()                \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);
#define fraction()                \
    cout.unsetf(ios::floatfield); \
    cout.precision(10);           \
    cout.setf(ios::fixed, ios::floatfield);
#define file()                        \
    freopen("input.txt", "r", stdin); \
    freopen("output.txt", "w", stdout);

typedef long long ll;
typedef vector<int> vi;
typedef vector<ll> vl;
typedef vector<vi> vvi;
typedef vector<vl> vvl;
typedef pair<int, int> pii;
typedef pair<double, double> pdd;
typedef pair<ll, ll> pll;
typedef vector<pii> vii;
typedef vector<pll> vll;
typedef double dl;
#define endl '\n'
#define PB push_back
#define coy cout << "YES" << endl;
#define con cout << "NO" << endl;
#define ain(A, NN)              \
    for (ll I = 0; I < NN; I++) \
    cin >> A[I]
using namespace std;

int binarysearch(vector<int> a, int target)
{
    int left = 0;
    int right = a.size()-1;
    
    while(left<=right)
    {
        int mid = left + (right - left)/2;
        
        if(a[mid]==target)
        {
            return mid+1;
        }
        else if(a[mid]>target)
        {
            right = mid-1;
        }
        else
        {
            left=mid+1;
        }
    }
}

int main()
{
    optimize();
    
    int t;
    cin>>t;
    
    while(t--)
    {
        int n;
        cin>>n;
        
        vector<int> a(n);
        ain(a,n);
        
        int k;
        cin>>k;
        
        int target = a[k-1];
        
        sort(a.begin(),a.end());
        
        int ans = binarysearch(a,target);
        
        cout<<ans<<endl;
    }
    
    return 0;
}
