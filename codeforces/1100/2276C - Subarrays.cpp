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
 int n, k;
 cin>>n>> k;
 vector<int> a(n+1);
 for(int i = 1; i<= n;i++){
  cin>>a[i];
 }
 int ans = 0;
 map<int ,int> mp;
 vector<int> pref(n+ 1,0);
 for(int i = 1;i<= n;i++){
  pref[i] = pref[i-1] + a[i];
 }
 for(int r = 1, i = 0;r <= n;r++){
  int upto  = r- k;
  while(i <upto){
     i++;
     mp[pref[i-1] % k]++;
   
  }
  ans += mp[pref[r]%k];
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