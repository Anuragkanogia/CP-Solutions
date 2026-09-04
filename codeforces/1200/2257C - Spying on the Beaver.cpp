// Problem: C. Spying on the Beaver
// Contest: Codeforces - Codeforces Round 1117 (Div. 2)
// URL: https://codeforces.com/problemset/problem/2257/C
// Memory Limit: 256 MB
// Time Limit: 2000 ms
// 
// Powered by CP Editor (https://cpeditor.org)

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
void solve(){
 int n ;
 cin>>n;
 vector<int> p(n-1);
 for(int i = 0;i< n-1;i++){
 	cin>>p[i];
 }
 int m;
 cin>>m;
 vector<int> a(m);
 for(int i = 0;i< m;i++){
 	cin>>a[i];
 }
 sort(all(a));
 cout<<m-1<<" ";
 for(int i = 1;i< m;i++){
 	cout<<a[i]<<" ";
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