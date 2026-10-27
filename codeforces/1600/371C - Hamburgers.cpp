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
 string s;
 cin>>s;
 int nb, ns, nc;
 cin>>nb>>ns>>nc;
 int pb , ps , pc;
 cin>>pb>>ps>>pc;
 int r;
 cin>>r;
 int lo = 0;
 int hi =3* 1e12;
int cb =0, cs = 0, cc = 0;
for(int i = 0;i<s.size();i++){
  if(s[i] == 'B')cb++;
  if(s[i] == 'S')cs++;
  if(s[i] == 'C')cc++;
}
int ans = 0;
while(lo <= hi){
 int mid = lo + (hi - lo)/2;
 int cost = max(0LL, cb*mid - nb)*pb + max(0LL, cs* mid - ns)*ps + max(0LL, cc*mid - nc)*pc;

 if(cost<= r){
  ans = mid;
 lo = mid+1;

 }
 else {
  hi = mid-1;
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

solve();

}