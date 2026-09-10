// Problem: C. Multiplicity
// Contest: Codeforces - Codeforces Round 523 (Div. 2)
// URL: https://codeforces.com/problemset/problem/1061/C?mobile=true
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
void solve(){
int n;
cin>>n;
vector<int> a(n+1);
int maxi = 0;
for(int i = 1;i<= n;i++){
	cin>>a[i];
	maxi = max(maxi , a[i]);
}
vector<int> dp(1e6 +1,0);
dp[0] = 1;
dp[1] = 1;
for(int i = 2;i<= n;i++){
	vector<int> divisors;
	for(int j = 1;j<= sqrt(a[i]);j++){
		if(a[i] % j == 0){
			divisors.push_back(j);
			if(a[i] / j != j){
				divisors.push_back(a[i]/j);
			}
		}
	}
	sort(all(divisors));
	reverse(all(divisors));
	for(auto it:divisors){
		dp[it] = (dp[it] + dp[it-1]) % mod;
	}
}
int ans = 0;
for(int i = 1;i<= n;i++){
  ans = (ans + dp[i]) % mod;
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