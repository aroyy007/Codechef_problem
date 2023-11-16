#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--)
	{
	    int n;
	    cin>>n;
	    if(n<=4)
	    {
	        cout<<0<<" "<<n<<endl;
	    }
	    else
	    {
	        cout<<1<<" "<<n-1<<endl;
	    }
	}
	return 0;
}

/* In more time complexive way
#include <bits/stdc++.h>
using namespace std;

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

const double PI = acos(-1);
const double eps = 1e-9;
const int inf = 2000000000;
const ll infLL = 9000000000000000000;
#define MOD 1000000007

#define mem(a, b) memset(a, b, sizeof(a))
#define sqr(a) ((a) * (a))

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

#define dbg(args...)            \
    do                          \
    {                           \
        cerr << #args << " : "; \
        debug(args);            \
    } while (0)
void debug()
{
    cerr << endl;
}
template <typename T, typename... hello>
void debug(T arg, const hello &...rest)
{
    cerr << arg << ' ';
    debug(rest...);
}

ll gcd(ll a, ll b)
{
    return __gcd(a, b);
}
ll lcm(ll a, ll b)
{
    return a * (b / gcd(a, b));
}

int diff(int a, int b)
{
    return b - a;
}

bool is_palindrome(int n)
{
    string s = to_string(n);
    string rev = s;
    reverse(rev.begin(), rev.end());
    return s == rev;
}

bool check_square(int n)
{
    int s = sqrt(n);
    return s * s == n;
}

bool check_cube(int n)
{
    int s = round(cbrt(n));
    return s * s * s == n;
}

bool is_prime(int n)
{
    if (n == 1)
    {
        return false;
    }
    for (int i = 2; i * i <= n; i++)
    {
        if (n % i == 0)
        {
            return false;
        }
    }
    return true;
}

int sum_d(int n)
{
    int sum = 0;
    while (n > 0)
    {
        sum += n % 10;
        n /= 10;
    }
    return sum;
}
vector<int> generate_palindromic_primes(int n)
{
    vector<int> palindromic_primes;
    int number = 2;
    while (palindromic_primes.size() < n)
    {
        if (is_prime(number) && is_palindrome(number))
        {
            palindromic_primes.push_back(number);
        }
        number++;
    }
    return palindromic_primes;
}
int count_digit(int number) {
   int count = 0;
   while(number != 0) {
      number = number / 10;
      count++;
   }
   return count;
}

int main()
{
    optimize();

    int T;
    cin >> T;

    while (T--)
    {
        int N,e=0,o=0;
        cin >> N;

        vector<int> palindromic_primes = generate_palindromic_primes(N);
        
        // for(int i = 0;i<palindromic_primes.size();i++)
        // {
        //     cout<<palindromic_primes[i]<<endl;
        // }
        for(int i=0;i<palindromic_primes.size();i++)
        {
            int num = count_digit(palindromic_primes[i]);
            if(num%2==0)
            {
                e++;
            }
            else if(num%2!=0)
            {
                o++;
            }
        }
        cout<<e<<" "<<o<<endl;
        
    }

    return 0;
}


*/
