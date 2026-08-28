// Author: Anurag 
// 
// Problem: Company Queries II
// Contest: CSES - CSES Problem Set
// URL: https://cses.fi/problemset/task/1688
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
const int bits = 22;
int getkthancestor(int u ,int k, vector<vector<int>> & up){
	for(int i = 0;i<bits;i++){
		if(k & (1<<i)){
			u = up[u][i];
		}
	}
	return u;
}
int lca(int a,int b, vector<vector<int>> &up ,vector<int>& depth){
	if(depth[b] > depth[a]){
		swap(a,b);
	}
	a = getkthancestor(a, depth[a] - depth[b],up);
	if( a== b){
		return a;
	}
	for(int i = bits-1;i>=0;i--){
		if(up[a][i] != up[b][i]){
			a = up[a][i];
			b = up[b][i];
		}
	}
	return up[a][0];
}
void solve(){
 int n,q;
 cin>>n>>q;
 vector<vector<int>> up(n+1,vector<int>(bits , 0));
 vector<int>depth(n+ 1,0);
 for(int i = 2;i<= n;i++){
 	int a;
 	cin>>a;
 	up[i][0] = a;
 	depth[i] = depth[up[i][0]] + 1;
 }
 for(int i = 1;i< bits;i++){
 	for(int u = 1;u<= n;u++){
 		up[u][i] = up[up[u][i-1]][i-1];
 	}
 }
 while(q--){
 	int a, b;
 	cin>>a>>b;
 	cout<<lca(a,b, up, depth)<<endl;
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