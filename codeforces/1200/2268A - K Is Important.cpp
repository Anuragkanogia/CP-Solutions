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
 int n, k;
 cin>>n>>k;
 vector<int> a(n+1);
 for(int i = 1;i<= n;i++){
  cin>>a[i];
 }
int ans = 0;
int l = 1;
int r= n-1;
if(2*k <=n){
for(int i =k; i<= n -k+1;i++){
  ans += a[i];
}
for(int i = 1;i<= k-1;i++){
  ans += max(a[i] , a[n-i + 1]);
}
cout<<ans<<endl;
}
else{
while(l< n-k + 2){
  ans+= max(a[l] , a[n-l+1]);
  l++;
}
cout<<ans<<endl;
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