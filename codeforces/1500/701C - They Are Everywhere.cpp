// Problem: C. They Are Everywhere
// Contest: Codeforces - Codeforces Round 364 (Div. 2)
// URL: https://codeforces.com/problemset/problem/701/C
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
 cin>>n ;
 string s;
 cin>>s;
 set<char>a;
 for(int i = 0;i< n;i++){
 	a.insert(s[i]);
 } 
 map<char,int>mp;
 int ans = INT_MAX;
 for(int i = 0;i< n;i++){
 	mp[s[i]] = i;
 	if(mp.size() == a.size()){
 		  int mini = INT_MAX;
    int maxi = 0;
    for(auto it : mp){
    	mini = min(mini , it.second);
    	maxi = max(maxi, it.second);
    }
 ans = min(ans, maxi - mini +1);
 	}

 }
// for(auto it: mp)cout<<it.first<<" "<<it.second<<endl;
    
  
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