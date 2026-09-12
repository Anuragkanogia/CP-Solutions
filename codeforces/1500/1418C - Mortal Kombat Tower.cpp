// Problem: C. Mortal Kombat Tower
// Contest: Codeforces - Educational Codeforces Round 95 (Rated for Div. 2)
// URL: https://codeforces.com/problemset/problem/1418/C
// Memory Limit: 256 MB
// Time Limit: 1000 ms
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
const int mod = 1e9 + 7;
#define MOD (1000000007);
const int NUM = 1000030;
const int N = 1e7 + 10;
#define DEBUG(x) cerr << #x << ": " << x << '\n'
void solve(){
 
 int n;
 cin>>n;
 vector<int>a(n);
 for(int i = 0;i< n;i++){
 	cin>>a[i];
 }
 if(  n == 1){
 	cout<<a[0]<<endl;
 	return;
 }
 vector<vector<int>> dp(n, vector<int>(2, INT_MAX));
 dp[0][0] = a[0];
 dp[1][0] = a[0] + a[1];
 dp[1][1] = a[0];
 for(int i = 2;i< n;i++){
	dp[i][0] = min(dp[i-1][1] + a[i] , dp[i-2][1] + a[i-1] + a[i]);
	dp[i][1] = min(dp[i-1][0] , dp[i-2][0]);
 }
 
 cout<<min(dp[n-1][0] , dp[n-1][1])<<endl;
 
    
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