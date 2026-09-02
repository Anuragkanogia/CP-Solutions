// Problem: Sliding Window Distinct Values
// Contest: CSES - CSES Problem Set
// URL: https://cses.fi/problemset/task/3222
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
 int n,k;
 cin>>n>>k;
 vector<int> a(n);
 for(int i = 0;i< n;i++){
 	cin>>a[i];
 }
map<int, int> mp;
for(int i = 0;i< k;i++){
	mp[a[i]]++;
	}
cout<<mp.size()<<" ";
for(int i = k;i< n;i++){
	

	mp[a[i]]++;
		mp[a[i-k]]--;
	if(mp[a[i-k]] == 0){
		mp.erase(a[i-k]);
	}
	cout<<mp.size()<<" ";
}
 
    
   }
int32_t main()
{
    ios::sync_with_stdio(false);
  cin.tie(nullptr);
  cout.tie(nullptr);

 //sieve();
  
 
solve();

}