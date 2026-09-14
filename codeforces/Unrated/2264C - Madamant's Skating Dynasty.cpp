// Problem: C. Madamant's Skating Dynasty
// Contest: Codeforces - Codeforces Round 1121 (Div. 2)
// URL: https://codeforces.com/contest/2264/problem/C
// Memory Limit: 256 MB
// Time Limit: 2000 ms
// 
// Powered by CP Editor (https://cpeditor.org)

#include <bits/stdc++.h>
#define ll long long
#define int long long 
//#define pb push_back
#define ppb pop_back
#define mp make_pair
using namespace std;
using vpi = vector<pair<int, int>>;
using pi = pair<int, int>;
using vi = vector<int>;
using vvi = vector<vector<int>>;
#define ff first
#define ss second
#define all(x) x.begin(), x.end()
//#define sz(x) (int)(x).size()
const int mod =998244353;
#define MOD (998244353)
const int NUM = 1000030;
const int N = 1e7 + 10;
#define DEBUG(x) cerr << #x << ": " << x << '\n'

ll binpow(ll a, ll b) {
	ll res = 1; a %= mod;
	 assert(b >= 0); for (; b; b >>= 1) {
	 	if (b & 1)res = res * a % mod; a = a * a % mod;
	 	}
	 	 return res;
	 	 }
void solve(){
 int n;
 cin>>n;
 vector<int>a(n);
 for(int i = 0;i<n;i++){
 	cin>>a[i];
 }
sort(all(a));
vector<int> suff(n,0);
suff[n-1] = a[n-1] % mod;
for(int i = n-2;i>=0;i--){
	suff[i] = (suff[i+1] + a[i]) % mod;
} 
 vector<int> fact(n+ 1,1);
 fact[0] = 1;
 fact[1] = 1;
 for(int i =2;i< n;i++){
 	fact[i] = (fact[i-1]*i) % MOD;
 }
 int ans = 0;
 for(int i = 0;i< n-1;i++){
 	int s  = (suff[i+1] -((n- i -1)*a[i])% mod)% mod;
 	
 	s = (s+ mod)% mod;
 	s =(s * fact[n-1])%mod;
 	
 	int inv = binpow(n- i-1, mod-2);
 	s =(s* inv) % mod;
 	ans  = (ans + s) % mod;
 }
    cout<<ans<<endl;
   }
int32_t main()
{
    ios::sync_with_stdio(false);
  cin.tie(nullptr);
  cout.tie(nullptr);

 //sieve();
  
int t;
   cin>>t;
 while(t--){  
solve();
}
}