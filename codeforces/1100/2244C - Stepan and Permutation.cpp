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
 int n , x, y;
 cin>>n>>x>>y;
 vector<int> a(n+1);
 for(int i = 1;i<= n;i++){
  cin>>a[i];
 }
 int sum = x+ y;
 int diff = abs(x - y);
int g = __gcd(x, y);
 for(int i =1;i<=n;i++){
 if(a[i] %g != i % g){
  cout<<"NO"<<endl;
  return;
 }
 }
 cout<<"YES"<<endl;
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