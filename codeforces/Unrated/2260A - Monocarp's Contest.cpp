// Problem: A. Monocarp's Contest
// Contest: Codeforces - Educational Codeforces Round 194 (Rated for Div. 2)
// URL: https://codeforces.com/contest/2260/problem/A
// Memory Limit: 512 MB
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
 
 
 int n;
 cin>>n;
 vector<int> a(n);
 int zero = 0;
 for(int i = 0;i< n;i++){
 	cin>>a[i];
 	if(a[i] == 0){
 		zero++;
 	}
 }
 if(a[0] == 0 && a[n-1] == 0){
 	cout<<0<<endl;
 	return;
 }
 if((a[0] == 0 && a[n-1] ==  1 )|| (a[0] == 1 && a[n-1] == 0)){
 	if(zero>= 2)cout<<1<<endl;
 	else cout<<-1<<endl;
 	return;
 }
 if(a[0] == 1 && a[n-1] == 1){
 	if(zero>= 2 ) cout<<2<<endl;
 	else cout<<-1<<endl;
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