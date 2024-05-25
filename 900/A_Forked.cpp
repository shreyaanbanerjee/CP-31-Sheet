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
#define fori for(i=0;i<n;i++)
template <class T>
void print_v(vector<T> &v) { cout << "{"; for (auto x : v) cout << x << ","; cout << "\b}"; }
#define MOD 1000000007
#define PI 3.1415926535897932384626433832795
#define read(type) readInt<type>()
ll min(ll a,int b) { if (a<b) return a; return b; }
ll min(int a,ll b) { if (a<b) return a; return b; }
ll max(ll a,int b) { if (a>b) return a; return b; }
ll max(int a,ll b) { if (a>b) return a; return b; }
ll gcd(ll a,ll b) { if (b==0) return a; return gcd(b, a%b); }
#define for0(i, n) for (int i = 0; i < (int)(n); ++i)
#define for1(i, n) for (int i = 1; i <= (int)(n); ++i)
int binexpiter(int a,int b){int ans=1;while(b){if(b&1) ans=(ans*1ll*a)%MOD; a=(a*a*1ll)%MOD; b>>=1;}return ans; }
ll lcm(ll a,ll b) { return a/gcd(a,b)*b; }
string to_upper(string a) { for (int i=0;i<(int)a.size();++i) if (a[i]>='a' && a[i]<='z') a[i]-='a'-'A'; return a; }
string to_lower(string a) { for (int i=0;i<(int)a.size();++i) if (a[i]>='A' && a[i]<='Z') a[i]+='a'-'A'; return a; }
bool prime(ll a) { if (a==1) return 0; for (int i=2;i<=round(sqrt(a));++i) if (a%i==0) return 0; return 1; }
void yes() { cout<<"YES\n"; }
void no() { cout<<"NO\n"; }
typedef long int int32;
typedef unsigned long int uint32;
typedef long long int int64;
typedef unsigned long long int  uint64;
vector<int> normalSieve(int n)
{vi v;
    bool prime[n / 2]; memset(prime, false, sizeof(prime));for (int i = 3; i * i < n; i += 2) {
  if (prime[i / 2] == false)
for (int j = i * i; j < n; j += i * 2)
 prime[j / 2] = true;
  }
   printf("2 ");
   for (int i = 3; i < n; i += 2)
   {if (prime[i / 2] == false)
   v.pb(i);
}
return v;
}
#define intmax INT_MAX
void write()
{
    int dx[4]={1,-1,-1,1};int dy[4]={1,1,-1,-1};
    int a,b,k=0;
    cin>>a>>b;
    int x1,y1,x2,y2;
    cin>>x1>>y1;
    cin>>x2>>y2;
    set<pair<int,int>> s1,s2;
    for0(i,4)
    {
        s1.insert({x1+dx[i]*a,y1+dy[i]*b});
        s2.insert({x2+dx[i]*a,y2+dy[i]*b});
        s1.insert({x1+dx[i]*b,y1+dy[i]*a});
        s2.insert({x2+dx[i]*b,y2+dy[i]*a});
    }
    for(auto p:s1)
{
    if(s2.find(p)!=s2.end())
    k++;
}
cout<<k<<endl;
}
int main()
{
    int t;
     cin>>t;
     while(t--)
     {
        write();
     }
     
    return 0;
}