
//One Day You will be Thankful for Yourself for Never Giving Up
#include<iostream>
#include<bits/stdc++.h>
using namespace std;
#define int long long int
#define LD long double


#define vi vector<int>
#define pi pair<int,int>
#define all(c) c.begin(),c.end()
#define pb push_back
#define eb emplace_back
#define ff first
#define ss second
#define nl "\n"
#define nline cout << '\n'

#define mem(a,b) memset((a),(b),sizeof(a))
#define For(i,n) for(int i=0;i<n;i++)
#define fora(i, a, n)  for(int i = a; i < n; ++i)
#define ford(i, a, n)  for(int i = a; i >= n; --i)
#define sz(x) (int)x.size()
#define sqr(x) (x)*(x)

#define yes cout<<"YES\n"
#define no cout<<"NO\n"

const int mod=1e9+7;
const int N=2e5+5;
const double PI=acos(-1.0);
const double eps=1e-6;
const int INF=0x3f3f3f3f;
const long long LLINF=0x3f3f3f3f3f3f3f3fLL;


int power(int base,int power){int res=1;while(power>0){if(power%2){power--;res=(res*base)%mod;}else{base=(base*base)%mod;power=power/2;}}return res;}
int fact[N];
void precalc(){memset(fact,0,sizeof(fact));fact[0]=fact[1]=1;for(int i=2;i<N;i++){fact[i]=(fact[i-1]*i)%mod;}}
int reverse(int n){int r=0;while(n>0){r=r*10+n%10;n/=10;}return r;}
int inv(int den){return power(den,mod-2LL);}
int ncr(int n,int r){if(r>n) return 0;else{int res=fact[n];int den=(fact[r]*fact[n-r])%mod;res=(res*inv(den))%mod;return res;}}
int lcm (int a, int b){return ((a / __gcd(a, b)) * b);} 
bool comp(int a, int b){return a>b;}


#define MAXP 1000005
vector<long long> prime_list;
void construct_plist(){
  vector<bool> fl(MAXP,false);
  for(int i=2;i<MAXP;i++){
    if(fl[i]){continue;}
    prime_list.push_back(i);
    for(int j=i;j<MAXP;j+=i){fl[j]=true;}
  }
}

void generate(int n){
    int prev=1;
    cout<<prev;
    for(int i=1; i<=n; i++){
        int cur = (prev * (n-i+1))/i;
        cout<<", "<<cur;
        prev=cur;
    }
}
void solve(){
    int n; cin>>n;
    generate(n);
  
  return;
}
signed main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    //precalc();
    //int t; cin>>t;  while(t--)
    solve();

    return 0;
}