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
 int n;
 cin>>n;
 vector<int> a(n);
 for(int i = 0;i< n;i++){
  cin>>a[i];
 }
sort(all(a));
map<int, int> mp;
map<int, int> visited;

for(int i = 0; i < n; i++) {
    if(visited.find(a[i]) != visited.end()) continue;

    visited[a[i]] = 1;

    for(int j = 0; j < n; j++) {
        if(a[j] % a[i] == 0) mp[a[i]]++;
    }
}

int maxi = 0;

for(auto it : mp) {
    maxi = max(maxi, it.second);
}

cout << n - maxi << endl;
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