// Problem: E. Masha and the Garland
// Contest: Codeforces - Codeforces Round 1109 (Div. 3)
// URL: https://codeforces.com/problemset/problem/2244/E
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
 int n, q;
 cin>>n>>q;
 
 string s;
 cin>>s;
 
 vector<int>anamoly(n,0);
 anamoly[0] = 0;
 for(int i = 1;i< n;i++){
 	if(s[i] == s[i-1])anamoly[i] = anamoly[i-1] + 1;
 	else anamoly[i] = anamoly[i-1];
 } 
 
 
 while(q--){
 	int l,r,k;
 	cin>>l>>r>>k;
int cnt = anamoly[r-1] - anamoly[l-1];
	
	if((cnt + 1)/2 <= k)cout<<"YES"<<endl;
	else cout<<"NO"<<endl;
	
 }
    
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