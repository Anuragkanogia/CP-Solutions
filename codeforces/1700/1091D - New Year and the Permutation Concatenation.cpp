// Problem: D. New Year and the Permutation Concatenation
// Contest: Codeforces - Good Bye 2018
// URL: https://codeforces.com/problemset/problem/1091/D
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
const int mod = 998244353;
#define MOD (1000000007);
const int NUM = 1000030;
const int N = 1e7 + 10;
#define DEBUG(x) cerr << #x << ": " << x << '\n'
void solve(){
 int n;
 cin>>n;
 vector<int> dp(n+ 1,0);
 dp[1] = 1;
 vector<int> fact(n+1 ,0);
 fact[1] = 1;
 for(int i= 2;i<= n;i++){
 	fact[i] = (fact[i-1] *i) % mod;
 }
 for(int i =2;i <= n;i++){
 	dp[i] = ((dp[i-1]% mod  + fact[i-1] % mod  - 1)* i) % mod;
 }
 
 cout<<dp[n]<<endl;
 
    
   }
int32_t main()
{
    ios::sync_with_stdio(false);
  cin.tie(nullptr);
  cout.tie(nullptr);

 //sieve();
  

solve();

}