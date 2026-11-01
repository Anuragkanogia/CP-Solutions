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

 for(int i = 0 ;i< n;i++){
  cin>>a[i];
 }
 map<int, int> mp1odd;
 map<int,int> mp1even;
 for(int i = 0;i<n;i++){
  if(i %2 != 0)mp1odd[a[i]]++;
  else mp1even[a[i]]++;
}

sort(all(a));

 map<int, int> mp2odd;
 map<int,int> mp2even;
 for(int i = 0;i<n;i++){
  if(i %2 != 0)mp2odd[a[i]]++;
  else mp2even[a[i]]++;
}

for(int i = 0;i< n;i++){
  if(mp1odd[a[i]] != mp2odd[a[i]] || mp1even[a[i]] != mp2even[a[i]]){
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