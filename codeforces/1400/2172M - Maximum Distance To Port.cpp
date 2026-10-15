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

void solve() {
 int n ,m , k;
 cin>>n>>m>>k;


 vector<int> type(n+1);
 for(int i = 1;i<=n;i++){
  cin>>type[i];
 }
 vector<vector<int>>adj(n+1);

 for(int i = 1;i<= m ;i++){
  int u, v;
  cin>>u>>v;

  adj[u].push_back( v);
  adj[v].push_back(u);
 }
//djisktra algo 
priority_queue<pair<int,int> , vector<pair<int,int>> , greater<pair<int,int>>> pq;
//store dist, node;
pq.push({0,1});
vector<int>dist(n+ 1, INT_MAX);
dist[1] = 0;

vector<int> cost(k+1,INT_MIN);
cost[type[1]] = 0;

while(pq.empty() == false){
  int d = pq.top().first;
  int node = pq.top().second;
  if (d > dist[node]) continue;

    cost[type[node]] = max(cost[type[node]], d);
  pq.pop();

  for(auto it : adj[node]){
      int next = it;
      int w = 1;

      if(dist[next] > d+ w){
        dist[next] = d+w;
        pq.push({d+w, next});
      }
      
  }
}

for(int i = 1;i<=k;i++){
  cout<<cost[i]<<" ";
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