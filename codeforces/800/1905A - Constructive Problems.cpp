// Problem: D. Alternating Path
// Contest: Codeforces - Educational Codeforces Round 188 (Rated for Div. 2)
// URL: https://codeforces.com/problemset/problem/2204/D
// Memory Limit: 512 MB
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

bool bipartite(int src, vector<vector<int>>& adj,
               vector<int>& color, vector<int>& cnt) {
    queue<int> q;
    q.push(src);

    color[src] = 0;
    cnt[color[src]]++;
    bool ok = true;

    while (!q.empty()) {
        int node = q.front();
        q.pop();

        

        for (auto it : adj[node]) {
            if (color[it] == color[node]) {
                ok = false;
            }
            else if (color[it] == -1) {
                color[it] = color[node] ^ 1;
                cnt[color[it]]++;
                q.push(it);
            }
        }
    }

    return ok;
}

void solve() {
  int n, m;
  cin>>n>>m;
  cout <<max(n,m)<<endl;
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