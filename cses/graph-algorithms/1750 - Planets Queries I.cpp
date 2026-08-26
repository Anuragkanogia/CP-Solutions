// Author: Anurag 
// 
// Problem: Planets Queries I
// Contest: CSES - CSES Problem Set
// URL: https://cses.fi/problemset/task/1750
// Memory Limit: 512 MB
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
const int MAXN = 200005;
const int LOG = 32; // 2^30 > 10^9

int up[MAXN][LOG];
int getkthancestor(int u, int k) {
    for (int i = 0; i < LOG; i++) {
        if (k & (1LL << i)) {
            u = up[u][i]; // FIXED: up[power][node]
        }
    }
    return u;
}
void solve(){
 
int n,q;
cin>>n>>q;

for(int i = 1;i<= n;i++){
	int a;
	cin>>a;
	up[i][0] = a;
} 
for(int i = 1;i<=31;i++){
 for(int u = 1;u<= n;u++){
 		up[u][i] = up[up[u][i-1]][i-1];
 	}
 }
 while(q--){
 	int u , k;
 	cin>>u>>k;
 	cout<<getkthancestor(u, k)<<'\n';
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