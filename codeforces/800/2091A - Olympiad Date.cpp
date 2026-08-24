// Author: Anurag 
// 
// Problem: A. Olympiad Date
// Contest: Codeforces - Codeforces Round 1013 (Div. 3)
// URL: https://codeforces.com/problemset/problem/2091/A
// Memory Limit: 256 MB
// Time Limit: 1000 ms

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
vector<int>a(n);
int one = 0;
int zero = 0;
int two = 0;
int three = 0;
int five = 0;
for(int i =0 ;i < n;i++){
	cin>>a[i];
} 
for(int i = 0;i< n;i++){
	if(a[i] == 1)one++;
	if(a[i] == 2)two++;
	if(a[i] == 3)three++;
	if(a[i] == 0)zero++;
	if(a[i] == 5)five++;
	
if(zero>= 3 && one>= 1 && two>= 2 && three>= 1 && five >= 1){
	cout<<i+1<<endl;
	return;
}
}
 cout<<0<<endl;
    
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