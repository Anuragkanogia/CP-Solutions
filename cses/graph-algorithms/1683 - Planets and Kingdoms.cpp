// Problem: Planets and Kingdoms
// Contest: CSES - CSES Problem Set
// URL: https://cses.fi/problemset/task/1683
// Memory Limit: 512 MB
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
void dfs(int node , vector<vector<int>>& adj, vector<int>&vis, stack<int> & st){
	vis[node] = 1;
	
	for(auto it : adj[node]){
		if(vis[it] == 0){
			dfs(it, adj, vis, st);
		}
	}
	st.push(node);
}
void reverseddfs(int node , vector<vector<int>>& rev, vector<int>& vis,vector<int>& component){
	vis[node]= 1;
	component.push_back(node);
	for(auto it :rev[node]){
		if(vis[it] == 0){
			reverseddfs(it ,rev,vis,component);
		}
	}
}
#define DEBUG(x) cerr << #x << ": " << x << '\n'
void solve(){
 int n,m;
 cin>>n>>m;
 vector<vector<int>>adj(n+ 1);
 vector<vector<int>>rev(n+1);
 for(int i = 1;i<= m;i++){
 	int u ,v;
 	cin>>u>>v;
 	adj[u].push_back(v);
 	rev[v].push_back(u);
 }
 vector<int>vis(n+1,0);
 stack<int> st;
 
 for(int i =1;i<= n;i++){
 	if(vis[i]== 0){
 		dfs(i, adj, vis , st);
 	}
 }
 vis.assign(n+ 1,0);
 vector<int>kingdom(n+1,0);
 int currentlabel = 1;
 while(st.empty() == false){
 	int node = st.top();
 	st.pop();
 	
 	if(vis[node] == 0){vector<int>component;
 	reverseddfs(node, rev, vis,component);
 	for(auto it: component){
 		kingdom[it] = currentlabel;
 	}
 	
 	currentlabel++;
 	}
 }
 cout<<currentlabel - 1<<endl;
 for(int i = 1;i<= n;i++){
 	cout<<kingdom[i]<<" ";
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