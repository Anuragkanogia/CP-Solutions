// Problem: B. Vaccination
// Contest: Codeforces - Nebius Welcome Round (Div. 1 + Div. 2)
// URL: https://codeforces.com/problemset/problem/1804/B
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
void solve(){
 int n , k , d, w;
 cin>>n>>k>>d>>w;
 vector<int> a(n);
 for(int i = 0;i<n;i++){
 	cin>>a[i];
 }
 int ans = 0;
int i = 0;

while(i < n) {
    ans++;

    int start = i;
    int expiry = a[i] + w + d;

    int cnt = 0;

    while(i < n && cnt < k && a[i] <= expiry) {
        i++;
        cnt++;
    }
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