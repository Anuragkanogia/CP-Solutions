// Problem: B. Cyclists
// Contest: Codeforces - Codeforces Round 1086 (Div. 2)
// URL: https://codeforces.com/problemset/problem/2208/B
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
void solve(){
 
 int n, k , p , m;
 cin>>n>>k>>p>>m;
 vector<int> a(n);
 for(int i = 0;i< n;i++){
 	cin>>a[i];
 }
 int val = a[p-1];
 a[p-1]  = -1;
 
 priority_queue<int, vector<int> , greater<int>> pq;
 queue<int> q;
 for(int i = 0;i<k;i++){
 	pq.push(a[i]);
 }
 for(int i = k;i< n;i++){
 	q.push(a[i]);
 }
 int cnt =0;
  while(pq.empty() == false){
  	int x= pq.top();
  	pq.pop();
  	
  	if(x == -1){
  		if(m < val)break;
  		cnt++;
  	
  	m-= val;
  	}
  	else {
  		if(m< x)break;
  		m-= x;
  	}
  	q.push(x);
  	if(q.empty() == false){
  	int y = q.front();
  		q.pop();
  	pq.push(y);
  	}
  
  }  
  cout<<cnt<<endl;
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