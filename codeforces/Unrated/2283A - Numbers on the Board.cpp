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
int l, r;
    cin >> l >> r;
    
    if (l == 0 && r == 0) {
        cout << 0<<endl;
    } else if (l >= 0) {
      
        cout << (l == 0 ? r - 1 : r - l) <<endl;
    } else if (r <= 0) {
        cout << (r == 0 ? -l - 1 : r - l)<<endl;
    } else {
        int k = min(-l, r);
        int maxi = 2 * k + (-l == r ? 1 : 2);
        cout << (r - l + 1) - maxi<<endl;
    }
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