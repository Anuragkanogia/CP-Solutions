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
 int alice = 0;
 int bob = 0;
 sort(all(a));
 bool aliceturn = true;
 for(int i = n-1;i>= 0;i--){
  if(aliceturn == true){
    if(a[i] %2 == 0){
      alice += a[i];
    }
    aliceturn= !aliceturn;
  }
  else{
    if(a[i] % 2!= 0){
      bob += a[i];
    }
      aliceturn= !aliceturn;
  }
  
 }
 if(alice == bob)cout<<"Tie"<<endl;
 else if(alice > bob)cout<<"Alice"<<endl;
 else cout<<"Bob"<<endl;
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