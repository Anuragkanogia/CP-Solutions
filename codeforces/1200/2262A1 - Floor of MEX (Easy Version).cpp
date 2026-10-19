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
 vector<int> p(n + 1, 0);

for(int i =0;i< n;i++){
  int k = ( i+ 1);
  int x = a[i];
  int l = k*x;
  int r = min(k* ( x+ 1) , n);
if(l<n) {
  p[l]++;
p[r]--;
}
}
vector<int> finalp(n+1, 0);
finalp[0] = p[0];
for(int i = 1;i< n;i++){
finalp[i] = finalp[i-1] + p[i];
}
vector<int> B;
for(int i = 0;i< n;i++){
  if(finalp[i] == 0){
    B.push_back(i);
  }
}

        cout << B.size() << '\n';
        for (int y : B) {
            cout << y << ' ';
        }
        cout << '\n';
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