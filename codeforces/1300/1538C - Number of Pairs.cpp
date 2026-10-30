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
 int n , l ,r;
 cin>> n>>l>>r;
 vector<int> a(n);

 for(int i = 0;i< n;i++){
  cin>>a[i];
 }
 sort(all(a));
long long cnt1 = 0, cnt2 = 0;

for(int i = 0; i < n; i++){

    int lo = i + 1, hi = n - 1;

    // Count pairs with sum <= r
    int ans = i;

    while(lo <= hi){
        int mid = (lo + hi) / 2;

        if(a[i] + a[mid] <= r){
            ans = mid;
            lo = mid + 1;
        }
        else{
            hi = mid - 1;
        }
    }

    cnt1 += ans - i;

    lo = i + 1;
    hi = n - 1;

    // Count pairs with sum < l
    ans = i;

    while(lo <= hi){
        int mid = (lo + hi) / 2;

        if(a[i] + a[mid] < l){
            ans = mid;
            lo = mid + 1;
        }
        else{
            hi = mid - 1;
        }
    }

    cnt2 += ans - i;
}

cout << cnt1 - cnt2 << endl;
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