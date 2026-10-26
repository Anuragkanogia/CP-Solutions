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
 vector<int> pos(n+1 , -1);
 for(int i = 0;i< n;i++){
  cin>>a[i];
  pos[a[i]] = i;
}
int m;
cin>>m;
int v= 0;
int p= 0;
while(m--){
  int b;
  cin>>b;
  v += pos[b] + 1;
  p += (n - pos[b]);

}
cout<< v<<" "<<p<<endl;

}
int32_t main()
{
    ios::sync_with_stdio(false);
  cin.tie(nullptr);
  cout.tie(nullptr);

 //sieve();
  
 
solve();

}