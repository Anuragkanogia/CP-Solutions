// Problem: E. Fair and Square
// Contest: Codeforces - Codeforces Round 1107 (Div. 3)
// URL: https://codeforces.com/contest/2241/problem/E
// Memory Limit: 256 MB
// Time Limit: 3000 ms
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
set<int> perfect;

void solve(){
	int m = 1000;
 for(int i = 1;i<= m;i++){
	perfect.insert(i*i);
}
int n ;
cin>>n;
vector<bool>a(n);
for(int i = 0;i< n;i++){
	int x;
	cin>>x;
	a[i] = perfect.count(x);
}
vector<vector<int>>adj(n+1);
for(int i = 1; i< n;i++){
	int u, v;
	cin>>u>>v;
	adj[u].push_back(v);
	adj[v].push_back(u);
}
int ans = 0;
vector<int> sub(n+ 1);
 // Find subtree sizes
    auto dfs = [&](auto &self, int u, int parent) -> int {

        sub[u] = 1;

        for (auto it : adj[u]) {

            if (it == parent)
                continue;

            sub[u] += self(self, it, u);
        }

        return sub[u];
    };

    dfs(dfs, 1, -1);


    auto func = [&](auto &self, int u, int parent) -> void {

        for (auto it : adj[u]) {

            if (it == parent)
                continue;

            self(self, it, u);
        }

        // a[u] is not a perfect square
        if (a[u - 1] == false)
            return;

        vi childsize;

        // Component containing u itself
        childsize.push_back(1);

        // Component towards parent
        if (parent != -1)
            childsize.push_back(n - sub[u]);

        // Components towards children
        for (auto it : adj[u]) {

            if (it == parent)
                continue;

            childsize.push_back(sub[it]);
        }

        int m = childsize.size();

        // Prefix sum
        vi pref(m);

        pref[0] = childsize[0];

        for (int i = 1; i < m; i++) {
            pref[i] = pref[i - 1] + childsize[i];
        }

        // Range sum [l, r]
        auto getsum = [&](const int l, const int r) -> int {

            if (r < 0 || l >= m)
                return 0;

            if (l > 0)
                return pref[r] - pref[l - 1];

            return pref[r];
        };

        // Choose 3 different components
        for (int mid = 0; mid < m; mid++) {

            ans += childsize[mid]
                 * getsum(0, mid - 1)
                 * getsum(mid + 1, m - 1);
        }
    };

    func(func, 1, -1);

    cout << ans << '\n'; 
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