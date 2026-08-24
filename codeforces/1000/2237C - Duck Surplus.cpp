// Author: Anurag 
// 
// Problem: C. Duck Surplus
// Contest: Codeforces - Order Capital Round 2 (Codeforces Round 1104, Div. 1 + Div. 2)
// URL: https://codeforces.com/problemset/problem/2237/C
// Memory Limit: 256 MB
// Time Limit: 2000 ms

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
 
int n;
cin>>n;
vector<int> a(n);
for(int i = 0;i< n;i++){
	cin>>a[i];
} 
vector<int> pref(n,0);
pref[0] = a[0];
for(int i =1;i< n;i++){
	if(pref[i-1] > a[i])pref[i] = pref[i-1] + a[i];
	else pref[i] = a[i];
}
 cout<<pref[n-1]<<endl;
    
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