// Problem: C. Premutation
// Contest: Codeforces - Codeforces Round 847 (Div. 3)
// URL: https://codeforces.com/problemset/problem/1790/C
// Memory Limit: 256 MB
// Time Limit: 3000 ms
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

void solve() {
 int n;
 cin>>n;
 
 
 vector<vector<int>> a(n, vector<int>(n-1));
 for(int i = 0 ;i<n;i++){
 	for(int j = 0 ;j< n-1;j++){
 		cin>>a[i][j];
 	}
 }
 vector<int> ans;
 map<int , int> mp;
 
 for(int i = 0;i< n;i++){
 mp[a[i][0]]++;	
 }
 for(auto it: mp){
 	if(it.second> 1)ans.push_back(it.first);
 }
 
 int curr = ans[0];
 for(int j = 0;j< n-1;j++){
 	for(int i = 0;i<n;i++){
 		if(a[i][j] != curr){
 			ans.push_back(a[i][j]);
 			curr = a[i][j];
 			break;
 		}
 	}
 }
 for(auto it: ans)cout<<it<<" ";
 
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