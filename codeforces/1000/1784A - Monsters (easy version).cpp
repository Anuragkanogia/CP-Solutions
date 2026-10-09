// Problem: A. Monsters (easy version)
// Contest: Codeforces - VK Cup 2022 - Финальный раунд (Engine)
// URL: https://codeforces.com/problemset/problem/1784/A
// Memory Limit: 512 MB
// Time Limit: 4000 ms
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

void solve() {
   int n;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; i++) {
      cin >> a[i];
    }
   sort(all(a));
   vector<int>b(n);
   b[0] = 1;
   for(int i = 1; i< n;i++){
   	b[i] = min(b[i-1] + 1, a[i]);
   	
   }
   int ans = 0;
   for(int i = 0;i< n;i++){
   	ans += a[i] - b[i];
   }
   cout<<ans<<endl;
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