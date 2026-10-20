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
vector<int > b(n);
map<int,int> mp;
for(int i = 0;i<n;i++){
  cin>>b[i];
  mp[b[i]]++;
}

if(mp.count(0) == 0){
  cout<<-1<<endl;
  return;
}
map<int,int> ans;
int prevshadow = 0;
int prevcnt = 0;
bool ok = true;
int lastelement = 0;
for(auto it: mp){
  int currshadow = it.first;
  int currcnt =  it.second;
  if(currshadow != 0){
  int diff = currshadow - prevshadow;
  if(diff % prevcnt != 0){
    ok = false;
    break;
  }
  int u = diff/prevcnt;
if( u <= lastelement){
  ok = false;
  break;
}
  ans[prevshadow] = u;
  lastelement = u;
}
prevshadow = currshadow;
prevcnt = currcnt;
}

if(ok == false){
  
  cout<<-1<<endl;
  return;
}
ans[prevshadow] = lastelement + 1;
for(int i = 0;i<n;i++){
  cout<<ans[b[i]]<<" ";
}
cout<<endl;
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