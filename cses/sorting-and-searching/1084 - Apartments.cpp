// Problem: Apartments
// Contest: CSES - CSES Problem Set
// URL: https://cses.fi/problemset/task/1084
// Memory Limit: 512 MB
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
 
 int n,m,k;
 cin>>n>>m>>k;
 vector<int> a(n);
 vector<int> b(m);
 for(int i = 0;i< n;i++){
 	cin>>a[i];
 }
 for(int i = 0;i<m;i++){
 	cin>>b[i];
 }
 sort(all(a));
 sort(all(b));
 int ans = 0;
 int j = m-1;
 int i = n-1;
 while(i>= 0 && j >= 0){
 	if(abs(a[i] - b[j]) <= k){
 		i--;
 		j--;
 		ans++;
 	}
 	else if(a[i] > b[j]){
 		i--;
 	}
 	else if(a[i] < b[j]){
 		j--;
 	}
 }
 cout<<ans<<endl;
   }
int32_t main()
{
    ios::sync_with_stdio(false);
  cin.tie(nullptr);
  cout.tie(nullptr);

 //sieve();
  

solve();

}