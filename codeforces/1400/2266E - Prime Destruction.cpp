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
const int mod = 1e9 + 7;
#define MOD (1000000007);
const int NUM = 1000030;
const int N = 2e5;
#define DEBUG(x) cerr << #x << ": " << x << '\n'
vector<bool> isprime(N+1,false);
vector<vector<int>> primearray(N+ 1);


void sieve(){
  for(int i = 2;i<= N ;i++){
    if(isprime[i] == false){
      isprime[i] = true;
      for(int j = 2*i;j<= N;j+=i){
        isprime[j] = true;
        primearray[j].push_back(i);
      }
      primearray[i].push_back(i);
    }
  }
}
void solve() {
 int n,k;
 cin>>n>>k;
 vector<int> dp(n+1 ,1e18);

 for(int i = 1;i<=n;i++){
  if(i<=k)dp[i] = 0;
 for(auto p: primearray[i]){
  dp[i] = min(dp[i], 1 + (p * dp[i/p]));
 }
 }
 int ans = 0;
 for(int i =0;i< n;i++){
  int x;
  cin>>x;
  ans += dp[x];
 }
 cout<<ans<<endl;
}
int32_t main()
{
    ios::sync_with_stdio(false);
  cin.tie(nullptr);
  cout.tie(nullptr);

sieve();
  
int t;
   cin>>t;
 while(t--){  
solve();
}
}