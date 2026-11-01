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
 int n , k;
 cin>>n>>k;
 int lo =0;
 int hi =n;
 int ans = ((n + k -1) * (n + k)) /2;
 while( lo<= hi){
     int mid = lo+ (hi-lo)/2;

     int curr =((k+mid-1) *(k+mid)) - (k * (k-1))/2  - ((k + n -1) * (k + n))/2;
     ans = min(ans, abs(curr));

    if(curr == 0) break;

    if(curr >= 0) {
        hi = mid-1;
    }
    else {
        lo = mid + 1;
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