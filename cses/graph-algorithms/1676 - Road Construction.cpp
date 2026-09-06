// Problem: Road Construction
// Contest: CSES - CSES Problem Set
// URL: https://cses.fi/problemset/task/1676
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

vector<int>parent;
vector<int>ranks;
vector<int>len;
int comp;
int maxsize;
int findparent(int x){
	if(x != parent[x]){
		parent[x] = findparent(parent[x]);
	}
	return parent[x];
}
void merge(int x,int y){
	int parx = findparent(x);
	int pary = findparent(y);
	if(parx != pary){
		if(ranks[parx]> ranks[pary]){
			parent[pary] = parx;
			len[parx] += len[pary];
		}
		else if(ranks[pary] >ranks[parx]){
			parent[parx] = pary;
			len[pary] += len[parx];
		}
		else {
			parent[parx] = pary;
			ranks[pary]++;
			len[pary] += len[parx];
		}
		comp--;
		maxsize = max(maxsize, max(len[parx],len[pary]));
	}
}
void solve(){
 
 int n,m;
 cin>>n>>m;
 parent.assign(n + 1 , 0);
 for(int i = 1;i<= n;i++){
 	parent[i] = i;
 }

 ranks.assign(n+1 , 1);
 len.assign(n+1 ,1);
 comp = n;
 maxsize = 1;
    while(m--){
    	int x,y;
    	cin>>x>>y;
    	merge(x,y);
    	cout<<comp<<" "<<maxsize<<'\n';
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