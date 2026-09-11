// Problem: B. Points on Plane
// Contest: Codeforces - Educational Codeforces Round 145 (Rated for Div. 2)
// URL: https://codeforces.com/problemset/problem/1809/B
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
 int n;
 cin>>n;

int lo =0;
int hi = 1e9;
int ans =0;
while (lo <= hi) {
    long long mid = lo + (hi - lo) / 2;

    if (mid * mid >= n) {
        ans = mid;
        hi = mid - 1;
    }
    else {
        lo = mid + 1;
    }
}

cout << ans - 1 << '\n';
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