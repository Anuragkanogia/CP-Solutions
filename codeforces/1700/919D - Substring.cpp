// Problem: D. Substring
// Contest: Codeforces - Codeforces Round 460 (Div. 2)
// URL: https://codeforces.com/problemset/problem/919/D
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
void solve(){
 
int n, m;
cin >> n >> m;

string s;
cin >> s;

vector<vector<int>> adj(n + 1);
vector<int> indegree(n + 1, 0);

for(int i = 0; i < m; i++) {
    int u, v;
    cin >> u >> v;

    adj[u].push_back(v);
    indegree[v]++;
}

vector<vector<int>> dp(n + 1, vector<int>(26, 0));

queue<int> q;

// Start paths from nodes having indegree 0
for(int i = 1; i <= n; i++) {
    if(indegree[i] == 0) {
        q.push(i);

        // Path containing only node i
        dp[i][s[i - 1] - 'a'] = 1;
    }
}

int cnt = 0;
int ans = 0;

while(!q.empty()) {

    int node = q.front();
    q.pop();

    cnt++;

    // Update answer using this node
    

    for(auto it : adj[node]) {

        int c = s[it - 1] - 'a';

        // IMPORTANT:
        // Add it only when considering this transition.
        for(int j = 0; j < 26; j++) {

            dp[it][j] = max(
                dp[it][j],
                dp[node][j] + (j == c)
            );
        }

        indegree[it]--;

        if(indegree[it] == 0) {
            q.push(it);
        }
    }
}

if(cnt != n) {
    cout << -1 << endl;
}
else {
	for(int i = 1;i<= n;i++){
		for(int j = 0;j< 26 ;j++){
			ans = max(ans, dp[i][j]);
		}
	}
    cout << ans << endl;
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