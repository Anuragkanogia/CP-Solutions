// Problem: B. Yet Another MEX Problem
// Contest: Codeforces - Hello 2026
// URL: https://codeforces.com/problemset/problem/2183/B
// Memory Limit: 256 MB
// Time Limit: 1500 ms
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
 
 int n, k;
 cin>>n>>k;
 vector<int> a(n);
 for(int i = 0;i< n;i++){
 	cin>>a[i];
 }
 vector<int> freq(n+ 1,0);
 for(int i = 0;i< n;i++){
 	freq[a[i]]++;
 }
int mex = 0;
while(freq[mex] > 0){
	mex++;
}
cout<<min(mex, k-1)<<endl;
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