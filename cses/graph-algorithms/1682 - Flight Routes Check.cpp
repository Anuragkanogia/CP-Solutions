// Problem: Flight Routes Check
// Contest: CSES - CSES Problem Set
// URL: https://cses.fi/problemset/task/1682
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
void solve(){
 int n, m;
 cin>>n>>m;
 vector<vector<int>> adj(n+1);
 vector<vector<int>> rev(n+1);
 for(int i = 1; i<= m;i++){
 	int u , v;
 	cin>>u>>v;
 	adj[u].push_back(v);
 	rev[v].push_back(u);
 }
 
 vector<int>vis(n+1, 0);
 queue<int>q;
 q.push(1);
 vis[1] =1;
 while(q.empty() == false){
 	int node = q.front();
 	q.pop();
 	for(auto it: adj[node]){
 		if(vis[it] == 0){
 			q.push(it);
 			vis[it] =1;
 		}
 	}
 }
 vector<int>vis2(n+1,0);
 vis2[1] =1;
 queue<int> q2;
 q2.push(1);
 while(q2.empty() == false){
 	int node = q2.front();
 	q2.pop();
 	for(auto it : rev[node]){
 		if(vis2[it] == 0){
 			q2.push(it);
 			vis2[it] = 1;
 		}
 	}
 }
 for(int i = 1;i<=n;i++){
 	if(vis2[i] == 0 ){
 		cout<<"NO"<<endl;
 		cout<<i<<" "<<1<<endl;
 		return;
 	}
 	if(vis[i] == 0){ cout<<"NO"<<endl; cout<<1<<" "<<i<<endl; return; }
 }
 
 cout<<"YES"<<endl;
    
   }
int32_t main()
{
    ios::sync_with_stdio(false);
  cin.tie(nullptr);
  cout.tie(nullptr);

 //sieve();
  

solve();

}