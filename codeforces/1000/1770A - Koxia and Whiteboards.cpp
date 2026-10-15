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
int n, m;
cin >> n >> m;

vector<int> a(n);
vector<int> b(m);

for (int i = 0; i < n; i++) cin >> a[i];
for (int i = 0; i < m; i++) cin >> b[i];

long long sum = b[m - 1];

for (int i = 0; i < m - 1; i++) {
    a.push_back(b[i]);
}

sort(all(a));
reverse(all(a));

for (int i = 0; i < n - 1; i++) {
    sum += a[i];
}

cout << sum << endl;
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