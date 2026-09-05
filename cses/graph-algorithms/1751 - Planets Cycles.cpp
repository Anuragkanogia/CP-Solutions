// Problem: Planets Cycles
// Contest: CSES - CSES Problem Set
// URL: https://cses.fi/problemset/task/1751
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
#define DEBUG(x) cerr << #x << ": " << x << '\n'
const int bits = 21;
vector<bool> in_cycle;//node cycle me h ya nahi
vector<int> cycle_id;//node kon si cycle me h
vector<int> cycle_pos;//node cycle me kis positon pe h
vector<int> cycle_len;//cycle ka length kya h jisme ye node h
vector<int> depth;//node kitne depth pe h

int jump(int u, int steps, vector<vector<int>>& up){
	for(int i = 0;i < bits;i++){
		if((steps >>i) & 1){
			u = up[u][i];
		}
	}
	return u;
}
void solve(){
 int n;
 cin>>n;
 vector<vector<int>> up(n+1,vector<int> (bits));
 vector<int> indegree(n+1,0);
 for(int i = 1;i<=n;i++){
 	int x;
 	cin>>x;
 	up[i][0] = x;
 	indegree[x]++;
 }
 for(int i = 1;i<bits;i++){
 	for(int u = 1;u<= n;u++){
 		up[u][i] = up[up[u][i-1]][i-1];
 	}
 }
 
 vector<int> topo;
 //doing kahns algo for topo sort
 queue<int> q;
 for(int i = 1;i<= n;i++){
 	if(indegree[i] == 0)q.push(i);
 }
 
 while(q.empty() == false){
 	int u = q.front();
 	q.pop();
 	topo.push_back(u);
 	indegree[up[u][0]]--;
 	if(indegree[up[u][0]] == 0)q.push(up[u][0]); 
}
in_cycle.assign(n+1 , 0);

//identify cycles
for(int i = 1;i<= n;i++){
	if(indegree[i] > 0)in_cycle[i] = 1;
}
int current_cycle = 0;
cycle_id.assign(n+1 , 0);
cycle_pos.assign(n+ 1, -1);
cycle_len.assign(n+1,0);
for(int i = 1;i<= n;i++){
	if(in_cycle[i] == 1 && cycle_id[i] == 0){
		int curr = i;
		current_cycle++;
		int pos = 0;
		while(cycle_id[curr] == 0){
			cycle_id[curr] = current_cycle;
			cycle_pos[curr] = pos;
			pos++;
			curr = up[curr][0];
		}
		cycle_len[current_cycle] = pos;
	}
}
depth.assign(n+ 1, 0);
 for(int i = topo.size()-1;i>= 0;i--){
 	int u = topo[i];
 	int parent = up[u][0];
 	depth[u] = depth[parent] + 1;
 }	
 	
 	
 	vector<int> ans(n+1);
 	for(int i = 1;i<= n;i++){
 		if(in_cycle[i] == 1){
 			ans[i] = cycle_len[cycle_id[i]];
 		}
 		else{
 			int node = jump(i , depth[i], up);
 			ans[i] = depth[i] + cycle_len[cycle_id[node]];
 		}
 	}
 	//cout<<ans.size()<<endl;
 	for(int i = 1;i<= n;i++){
 		cout<<ans[i]<<" ";
 	}
 	cout<<endl;
 	
   }
int32_t main()
{
    ios::sync_with_stdio(false);
  cin.tie(nullptr);
  cout.tie(nullptr);

 //sieve();
  

solve();

}