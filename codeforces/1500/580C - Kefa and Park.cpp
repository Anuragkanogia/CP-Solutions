// Problem: C. Kefa and Park
// Contest: Codeforces - Codeforces Round 321 (Div. 2)
// URL: https://codeforces.com/problemset/problem/580/C
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
int cnt = 0;
 int n,m;
void dfs(int node,int parent, vector<vector<int>>& adj, vector<int>& a, int mconsec){
	if(mconsec > m){
		return;
	}
	bool isleaf = true;
	for(auto it : adj[node]){
		if(it == parent)continue;
		
		isleaf = false;
		if(a[it] == 1)dfs(it, node, adj, a, mconsec +1);
		else dfs(it , node , adj, a, 0);
	}
	if(isleaf == true)cnt++;
	
	}
void solve(){
 cnt= 0;

 cin>>n>>m;
 vector<int> a(n+1);
 for(int i = 1;i<= n;i++){
 	cin>>a[i];
 }
 vector<vector<int>>adj(n+1);
 for(int i = 0;i<n -1;i++){
 	int u,v;
 	cin>>u>>v;
 	adj[u].push_back(v);
 	adj[v].push_back(u);
 }
 if(a[1] == 1)dfs(1,0,adj, a, 1);
 else dfs(1,0,adj, a, 0);
 
 
 cout<<cnt<<endl;
    
   }
int32_t main()
{
    ios::sync_with_stdio(false);
  cin.tie(nullptr);
  cout.tie(nullptr);

 //sieve();
  
  
solve();

}