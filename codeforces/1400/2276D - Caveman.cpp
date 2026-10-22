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
 int n , m;
 cin>>n>>m;
 vector<vector<int>> adj(n+ 1);
 vector<int> indegree(n+1, 0);
 for(int i = 0;i< m;i++){
  int u , v;
  cin>>u>>v;

  adj[u].push_back(v);
  adj[v].push_back(u);
  indegree[u]++;
  indegree[v]++;

 }

sort(all(indegree));
if(indegree[1] == 0){
  cout<<"Brain Melt"<<endl;
  return;
}
if(indegree[n] == n-1 && indegree[n-1] == 1){
  cout<<2<<endl;
  return;
}

 cout<<"Many"<<endl;
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