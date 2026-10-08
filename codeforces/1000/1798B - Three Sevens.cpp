// Problem: B. Three Sevens
// Contest: Codeforces - Codeforces Round 860 (Div. 2)
// URL: https://codeforces.com/problemset/problem/1798/B
// Memory Limit: 256 MB
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

void solve(){
int m;
cin >> m;

vector<int> last(50001, 0);

for(int i = 1; i <= m; i++) {
    int n;
    cin >> n;

    for(int j = 0; j < n; j++) {
        int x;
        cin >> x;
        last[x] = i;
    }
}

vector<int> ans(m + 1, -1);

for(int i = 1; i <= m; i++) {
    bool found = false;

    for(int j = 1; j <= 50000; j++) {
        if(last[j] == i) {
            ans[i] = j;
            found = true;
            break;
        }
    }

    if(!found) {
        cout << -1 << '\n';
        return;
    }
}

for(int i = 1; i <= m; i++) {
    cout << ans[i] << " ";
}

cout << '\n';
    
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