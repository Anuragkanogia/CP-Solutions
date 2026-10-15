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
 string s;
 cin>>s;
 int zero = 0;
 int totalone = 0;
 for(int i = 0;i< n;i++){
  if(s[i] == '1')totalone++;
  else zero++;
 }

 if(s[0] == '1'){
  cout<<zero<<endl;
  return;
 }
 int currone = 0;

 int ans = INT_MAX;

 for(int i = 0;i< n;i++){
  if(s[i] == '1')currone++;
  int suffone = totalone - currone;

  int suffzero = n - i-1-suffone;

  ans = min(ans , currone + suffzero);
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