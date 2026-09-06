// Problem: Road Reparation
// Contest: CSES - CSES Problem Set
// URL: https://cses.fi/problemset/task/1675
// Memory Limit: 128 MB
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
 int n,m;
 cin>>n>>m;
 vector<vector<pair<int,int>>> adj(n+1);
 for(int i = 1;i<=m;i++){
 	int u,v,w;
 	cin>>u>>v>>w;
 	adj[u].push_back({v,w});
 	adj[v].push_back({u,w});
 }
 //Prim's algo
 priority_queue<pair<int,int> , vector<pair<int,int>> , greater<pair<int,int>>> pq;
 pq.push({0,1});
 int ans= 0;

 vector<int> vis(n+ 1, 0); 
 while(pq.empty()== false){
 	int node = pq.top().second;
 	int dist = pq.top().first;
	pq.pop();
 		if(vis[node] == 1)continue;
 		vis[node] = 1;
 	ans += dist;
 	for(auto it: adj[node]){
 		int wt = it.second;
 		int next = it.first;
 		if(vis[next] == 0){
 		pq.push({wt,next});
 		}
 	}
 }
 for(int i = 1;i<= n;i++){
 	if(vis[i]== 0){
 		cout<<"IMPOSSIBLE"<<endl;
 		return;
 	}
 }
 cout<<ans<<endl;
 
    
   }
int32_t main()
{
    ios::sync_with_stdio(false);
  cin.tie(nullptr);
  cout.tie(nullptr);

 //sieve();

solve();
}