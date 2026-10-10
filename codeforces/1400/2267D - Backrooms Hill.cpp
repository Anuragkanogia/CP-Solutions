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
 for(int i = 0;i<n;i++){
  cin>>a[i];
 }
 vector<pair<int,int>> v;
 for(int i = 0 ;i< n;i++){
  v.push_back({a[i] , i % 2});
 }
 sort(all(v));
 reverse(all(v));


 vector<vector<pair<int, int>>> queue(2);
 for(auto it: v){
  int val = it.first;
  int ind = it.second;
bool pushed = false;

for(auto &q : queue){
  if(q.empty() == true){
    queue[0].push_back({val, ind});
    queue[1].push_back({val , ind});
    pushed = true;
    break;
  }
  else {
    int curr = q.back().first;
    int currind = q.back().second;

    if(currind != ind){
      q.push_back({val, ind});
      pushed = true;
      break;
    }
  }

  
}
if(pushed == false){
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