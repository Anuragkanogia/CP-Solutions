// Problem: B. Two Buttons
// Contest: Codeforces - Codeforces Round 295 (Div. 2)
// URL: https://codeforces.com/problemset/problem/520/B
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
 
 int n, m;
 cin>>n>>m;
 int limit = 2*max(n , m) + 5;
 queue<int>q;
 vector<int> dist(limit + 1 , -1);
 q.push(n);
 dist[n] = 0;
 while(q.empty() == false){
 	int node = q.front();
 	q.pop();
 	if(node == m){
 		cout<<dist[node]<<endl;
 		return;
 	}
 	if(2*node<= limit && dist[2*node] == -1){
 		dist[2*node] = dist[node]+ 1;
 		q.push(2*node);
 	}
 	if(node - 1 >= 0 && dist[node-1] == -1){
 		dist[node-1] = dist[node] + 1;
 		q.push(node-1);
 	}
 }
 cout<<-1<<endl;
    
   }
int32_t main()
{
    ios::sync_with_stdio(false);
  cin.tie(nullptr);
  cout.tie(nullptr);

 //sieve();
  

solve();
}
