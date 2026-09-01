// Problem: Planets Queries II
// Contest: CSES - CSES Problem Set
// URL: https://cses.fi/problemset/task/1160
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
vector<vector<int>>up;
vector<int> arr;
vector<bool> vis;
vector<int> len;
const int bits = 21;
void dfs(int node){
if(vis[node] == true)return;
vis[node]  = true;
dfs(arr[node]);
up[node][0] = arr[node];
len[node] = len[up[node][0]]+ 1;

for(int i = 1;i<bits;i++){
	up[node][i] = up[up[node][i-1]][i-1];
}
}

int jump(int a , int dist){
	if(dist < 0)return -1;
	for(int level = 0;dist >0 ;level++,dist>>=1 ){
		if(dist & 1){
			a = up[a][level];
		}
	}
	return a;
}
void solve(){
 int n,q;
 cin>>n>>q;
 arr.resize(n+1);
 up.assign(n+1 ,vector<int>(bits));
 len.assign(n+1 , 0);
 vis.assign(n+1 , false);
 
 for(int i = 1;i<= n;i++){
 	cin>>arr[i];
 }
 for(int i = 1;i<= n;i++){
 	if(vis[i] == false){
 		dfs(i);
 	}
 }
    while(q--){
    	int a,b;
    	cin>>a>>b;
    	int ans;
    	int cycle_entry_a = jump(a, len[a]);
    	if(jump(a, len[a] - len[b]) == b){
    		ans = len[a] - len[b];
    	}
    	else if(jump(cycle_entry_a , len[cycle_entry_a] - len[b]) == b){
    		ans =  len[cycle_entry_a] - len[b] + len[a];
    	}
    	else {
    		ans = -1;
    	}
    	cout<<ans<<"\n";
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