#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define pii pair<int, int>
#define pll pair<long long, long long>
#define vi vector<int>
#define vll vector<long long>
#define mii map<int, int>
#define si set<int>
#define sc set<char>
#define pb push_back
#define fori for (i = 0; i < n; i++)
template <class T>
void print_v(vector<T> &v)
{
    cout << "{";
    for (auto x : v)
        cout << x << ",";
    cout << "\b}";
}
#define MOD 1000000007
#define PI 3.1415926535897932384626433832795
#define read(type) readInt<type>()
int power(int x, unsigned int y)
{
    int res = 1; // Initialize result
    while (y > 0)
    {
        if (y & 1)
            res = res * x;
        y = y >> 1;
        x = x * x;
    }
    return res;
}
ll min(ll a, int b)
{
    if (a < b)
        return a;
    return b;
}
ll min(int a, ll b)
{
    if (a < b)
        return a;
    return b;
}
ll max(ll a, int b)
{
    if (a > b)
        return a;
    return b;
}
ll max(int a, ll b)
{
    if (a > b)
        return a;
    return b;
}
ll gcd(ll a, ll b)
{
    if (b == 0)
        return a;
    return gcd(b, a % b);
}
#define for0(i, n) for (int i = 0; i < (int)(n); ++i)
#define for1(i, n) for (int i = 1; i <= (int)(n); ++i)
ll expo(ll a, ll b, ll mod)
{
    ll res = 1;
    while (b > 0)
    {
        if (b & 1)
            res = (res * a) % mod;
        a = (a * a) % mod;
        b = b >> 1;
    }
    return res;
}
ll lcm(ll a, ll b) { return a / gcd(a, b) * b; }
string to_upper(string a)
{
    for (int i = 0; i < (int)a.size(); ++i)
        if (a[i] >= 'a' && a[i] <= 'z')
            a[i] -= 'a' - 'A';
    return a;
}
string to_lower(string a)
{
    for (int i = 0; i < (int)a.size(); ++i)
        if (a[i] >= 'A' && a[i] <= 'Z')
            a[i] += 'a' - 'A';
    return a;
}
bool prime(ll a)
{
    if (a == 1)
        return 0;
    for (int i = 2; i <= round(sqrt(a)); ++i)
        if (a % i == 0)
            return 0;
    return 1;
}
void yes() { cout << "YES\n"; }
void no() { cout << "NO\n"; }
typedef long int int32;
typedef unsigned long int uint32;
typedef long long int int64;
typedef unsigned long long int uint64;
bool vowel(char ch)
{
    if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u')
        return true;
    return false;
}
vector<int> normalSieve(int n)
{
    vi v;
    bool prime[n / 2];
    memset(prime, false, sizeof(prime));
    for (int i = 3; i * i < n; i += 2)
    {
        if (prime[i / 2] == false)
            for (int j = i * i; j < n; j += i * 2)
                prime[j / 2] = true;
    }
    printf("2 ");
    for (int i = 3; i < n; i += 2)
    {
        if (prime[i / 2] == false)
            v.pb(i);
    }
    return v;
}
#define intmax INT_MAX
void write()
{
    ll n, p, x, y,i,j;
    cin>>n>>p;
    vector<pair<ll,ll> > v(n);
    vll vis(n,0);
    for0(i, n)
    {
        cin >> v[i].second;
    }
    for0(i,n)
    cin>>v[i].first;
    ll s=0;
    sort(v.begin(), v.end());
    j=1;
    for (i=0;i<n;i++)
    {
        if(!vis[i])
        {
            s+=p;vis[i]=1;
            }
            if(v[i].first>=p)
            {
                break;
            }
        if(j+v[i].second<n)
        {
            j+=(v[i].second);
            s+=(v[i].first*v[i].second);
            for(int k=i;k<j;k++)
            vis[k]=1;
        }
        else 
        {
            s+=(n-j)*v[i].first;
            break;
            }
        }
        cout<<s<<endl;
    }
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        write();
    }

    return 0;
}
