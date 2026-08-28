// Author: Anurag 
// 
// Problem: Distance Queries
// Contest: CSES - CSES Problem Set
// URL: https://cses.fi/problemset/task/1135
// Memory Limit: 512 MB
// Time Limit: 1000 ms

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
const int bits = 25;
#define DEBUG(x) cerr << #x << ": " << x << '\n'
void dfs(int node,int par, vector<vector<int>>& adj, vector<int> &depth,vector<vector<int>>& up){


	up[node][0] = par;
	for(int i = 1;i<bits;i++){
		up[node][i] = up[up[node][i-1]][i-1];
	}
	for(auto it :adj[node]){
		if(it != par){
			depth[it] = depth[node] + 1;
			dfs(it , node , adj, depth, up);
		}
	}
	
}
int getkthancestor(int u , int k,vector<vector<int>> & up){
	for(int i = 0 ;i<bits;i++){
		if(k &(1<<i)){
			u = up[u][i];
		}
	}
	return u;
}
int lca(int a, int b, vector<int>& depth, vector<vector<int>>& up){
	if(depth[a] < depth[b]){
		swap(a,b);
	}
	a = getkthancestor(a , depth[a] - depth[b] , up);
	if(a == b){
		return a;
	}
	for(int i = bits - 1;i>= 0 ;i--){
		if(up[a][i] != up[b][i]){
			a = up[a][i];
			b = up[b][i];
		}
	}
	return up[a][0];
	
}
void solve(){
 
 int n,q;
 cin>>n>>q;
 vector<vector<int>> adj(n+1);
 for(int i = 0;i<n-1;i++){
 	int u,v;
 	cin>>u>>v;
 	adj[u].push_back(v);
 	adj[v].push_back(u);
 }
 vector<int> depth(n+1, 0);
 depth[1] =0;


 vector<vector<int>> up(n+ 1 , vector<int> (bits , 0));
 for (int i = 0; i < bits; i++) up[0][i] = 0;
 dfs(1, 0, adj, depth, up );
 while(q--){
 	int a, b;
 	cin>>a>>b;
 	int l = lca(a, b,depth , up);
 	cout<<depth[a] + depth[b] - 2* depth[l]<<'\n';
 }
    
   }
int32_t main()
{
    ios::sync_with_stdio(false);
  cin.tie(nullptr);
  cout.tie(nullptr);

 //sieve();

solve();

}