// Problem: F. Consecutive Subsequence
// Contest: Codeforces - Codeforces Round 479 (Div. 3)
// URL: https://codeforces.com/problemset/problem/977/F
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
 int n;
 cin>>n;
 vector<int>a(n);
 map<int,int>mp;
 for(int i = 0;i< n;i++){
 	cin>>a[i];
 }
 int ans =1;
 for(int i = 0;i< n;i++){
 	mp[a[i]] = max(mp[a[i]] , mp[a[i] - 1] + 1);
 	ans = max(ans, mp[a[i]]);
 }
 cout<<ans<<endl;
 int lst = 0;
 for(auto it : mp){
 	if(it.second == ans)lst = it.first;
 }
 vector<int> res;
 for(int i = n-1;i>=0;i--){
 	if(a[i] == lst){
 		res.push_back(i+1);
 		lst--;
 	}
 }
reverse(all(res));
for(auto it : res)cout<<it<<" ";
 
    
   }
int32_t main()
{
    ios::sync_with_stdio(false);
  cin.tie(nullptr);
  cout.tie(nullptr);

 //sieve();

solve();

}