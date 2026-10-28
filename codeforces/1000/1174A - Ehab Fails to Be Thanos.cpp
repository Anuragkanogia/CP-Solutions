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
 n = 2*n;
 vector<int> a(n);
 for(int i = 0 ;i< n;i++){
  cin>>a[i];
 }
 bool can = false;
 for(int i = 0;i< n-1;i++){
  if(a[i] != a[i+1]){
    can =true;
    break;
  }
 }
 if(can == false){
  cout<<-1<<endl;
 }
 else {
  sort(all(a));
  for(auto it: a){
    cout<<it<<" ";
  }
  cout<<endl;
 }
}
int32_t main()
{
    ios::sync_with_stdio(false);
  cin.tie(nullptr);
  cout.tie(nullptr);

 //sieve();

solve();

}