// Problem: B. KiaKio and Squared Numbers
// Contest: Codeforces - Codeforces Round 1124 (Div. 2)
// URL: https://codeforces.com/problemset/problem/2269/B
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
int cal(int x){
	int sum = 0;
	while(x){
		int dig = x % 10;
		sum+= dig* dig;
  x= x/10;
	}
	return sum;
}
void solve(){
 
 int n;
 cin>>n;
 vector<int> a(n);
 for(int i = 0;i< n;i++){
 	cin>>a[i];
 }
map<int, int> mp;
for(int i = 0;i< n;i++){
	int x = a[i];
	for(int j= 0;j< 10000;j++){
		x = cal(x);
	}
	mp[x]++;
}
int ans = 0;
for(auto it: mp){
	int count= it.second;
	if(count>= 2){
		ans +=( (count) *(count-1))/ 2;
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
  
int t;
   cin>>t;
 while(t--){  
solve();
}
}