// Problem: C. Village Guilds
// Contest: Codeforces - Codeforces Round 1106 (Div. 2)
// URL: https://codeforces.com/problemset/problem/2238/C
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
const int mod = 1e9 + 7;
#define MOD (1000000007);
const int NUM = 1000030;
const int N = 1e7 + 10;
#define DEBUG(x) cerr << #x << ": " << x << '\n'
vector<vector<int>> adj;
int ans = 0;
vector<int> h;//height of subtree rooted at u
void dfs(int u, int p){
	int mx = 0;
int smx = 0;
for(auto it : adj[u]){
	if(it == p)continue;
	
	dfs(it , u);
	int x= h[it] + 1;
	if(x >= mx){
		smx = mx;
		mx = x;
	}
	else {
		smx = max(x, smx);
	}
}
h[u] = mx;
ans += smx + 1;
}
void solve(){
	int n;
	cin>>n;
	ans = 0;

    adj.assign(n + 1, {});
h.assign(n+ 1, 0);
	for(int i = 2;i<= n;i++){
	   int p;
	   cin>>p;
	   adj[p].push_back(i);
	   adj[i].push_back(p);
	}
 
 dfs(1, -1);
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