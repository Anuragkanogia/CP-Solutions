// Author: Anurag 
// 
// Problem: Company Queries I
// Contest: CSES - CSES Problem Set
// URL: https://cses.fi/problemset/task/1687
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
int kthancestor(int u, int k, vector<vector<int>>& up){
	for(int i = 0;i<= 21;i++){
		if(  k &(1 <<i)){
			u = up[u][i];
		}
		if(u== 0)return -1;
	}
	return u;
}

void solve(){
 int n,q;
 cin>>n>>q;
	vector<vector<int>> up(n+1, vector<int>(22, 0));
	for(int i = 2;i<=n;i++){
		int a;
		cin>>a;
	 up[i][0] = a; 
	}
	for(int u = 1; u<= n;u++){
 for(int i = 1;i<= 21;i++){
up[u][i] = up[up[u][i-1]][i-1];
 }
 }
 while(q--){
 	int u,k;
 	cin>>u>>k;
 	cout<<kthancestor(u , k, up)<<endl;
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