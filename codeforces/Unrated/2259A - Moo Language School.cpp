// Problem: A. Moo Language School
// Contest: Codeforces - Codeforces Round 1119 (Div. 3)
// URL: https://codeforces.com/contest/2259/problem/A
// Memory Limit: 256 MB
// Time Limit: 1000 ms
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
 
 int n,k;
 cin>>n>>k;
 string s;
 cin>>s;
 int ans = 0;
for(int i = 0 ;i< n;){
	bool there = false;
	int j = i;
	while(j < i+ k && j < n){
		if(s[j] == '0')there = true;
		j++;
	}
	i = j;
	
	if(there == false)ans++;
}
cout<<ans<<endl;
 
    
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