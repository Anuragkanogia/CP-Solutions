// Author: Anurag 
// 
// Problem: Investigation
// Contest: CSES - CSES Problem Set
// URL: https://cses.fi/problemset/task/1202
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
#define DEBUG(x) cerr << #x << ": " << x << '\n'
void solve(){
 
int n,m;
cin>>n>>m;
vector<vector<pair<int,int>>> adj(n+1);
for(int i = 1;i<= m;i++){
	int u ,v,w;
	cin>>u>>v>>w;
	adj[u].push_back({v,w});
} 
vector<vector<int>> dp(n + 1, vector<int>(4, LLONG_MAX));

 dp[1][0] = 0;
 dp[1][1] = 1;
 dp[1][2] = 0;
 dp[1][3] = 0;
 priority_queue<pair<int,int>, vector<pair<int ,int>> , greater<pair<int,int>>>pq;
 pq.push({ 0,1});
 while(pq.empty() == false){
 	int dist = pq.top().first;
 	int node = pq.top().second;
 	pq.pop();
 	if(dist > dp[node][0])continue;
 	for(auto it : adj[node]){
 		int next = it.first;
 		int wt = it.second;
 		if(dist + wt < dp[next][0]){
 			dp[next][0] = dist + wt;
 			dp[next][1] = dp[node][1];
 			dp[next][2] = dp[node][2] + 1;
 			dp[next][3] = dp[node][3] + 1;
 			pq.push({ dist + wt , next});
 		}
 		else if(dist + wt == dp[next][0]){
 			dp[next][1] = (dp[next][1] + dp[node][1])% mod;
 			dp[next][2] = min(dp[next][2] , dp[node][2] + 1);
 			dp[next][3] = max(dp[next][3] , dp[node][3] + 1);
 		}
 	}
 }
 cout<<dp[n][0]<<" "<<dp[n][1]<<" "<<dp[n][2]<<" "<<dp[n][3]<<endl;
   }
int32_t main()
{
    ios::sync_with_stdio(false);
  cin.tie(nullptr);
  cout.tie(nullptr);

 //sieve();

solve();

}