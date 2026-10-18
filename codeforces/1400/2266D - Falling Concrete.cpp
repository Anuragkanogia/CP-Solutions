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
 set<int> s;
 vector<int> d;
 for(int i = 0;i< n;i++){
  s.insert(a[i] - i);
 }
 for(auto it : s){
  d.push_back(it);
 }
 sort(all(d));
 int ans = 1;
 int cnt = 1;
for(int i = 0;i< d.size()-1;i++){
  if(d[i+1] - d[i] == 1){
    cnt++;
    ans = max(ans, cnt);
  }
  else {
    cnt = 1;
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