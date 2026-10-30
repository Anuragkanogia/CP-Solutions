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
 int n, l, r;
cin >> n >> l >> r;

vector<int> a(n);
for(int i = 0; i < n; i++) cin >> a[i];

sort(a.begin(), a.end());

long long cnt = 0;

for(int i = 0; i < n; i++){

    // Lower bound: first element >= l - a[i]
    int lo = i + 1, hi = n - 1;
    int lb = n;

    while(lo <= hi){
        int mid = (lo + hi) / 2;

        if(a[mid] >= l - a[i]){
            lb = mid;
            hi = mid - 1;
        }
        else{
            lo = mid + 1;
        }
    }

    // Upper bound: first element > r - a[i]
    lo = i + 1;
    hi = n - 1;
    int ub = n;

    while(lo <= hi){
        int mid = (lo + hi) / 2;

        if(a[mid] > r - a[i]){
            ub = mid;
            hi = mid - 1;
        }
        else{
            lo = mid + 1;
        }
    }

    cnt += ub - lb;
}

cout << cnt << endl;
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