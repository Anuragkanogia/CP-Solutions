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
   int n, d;
cin >> n >> d;

vector<long long> a(n);
for(int i = 0; i < n; i++) {
    cin >> a[i];
}

sort(all(a));

long long cnt = 0;

for(int i = 0; i < n - 2; i++) {
    int lo = i + 2;
    int hi = n - 1;
    int ans = i + 1;

    while(lo <= hi) {
        int mid = (lo + hi) / 2;

        if(a[mid] - a[i] <= d) {
            ans = mid;
            lo = mid + 1;
        }
        else {
            hi = mid - 1;
        }
    }

   long long len = ans - i;
cnt += (len * (len - 1)) / 2;
}

cout << cnt << endl;
}
int32_t main()
{
    ios::sync_with_stdio(false);
  cin.tie(nullptr);
  cout.tie(nullptr);

 //sieve();
  

solve();

}