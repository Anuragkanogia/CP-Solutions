// Problem: B. Annoying the Ghost
// Contest: Codeforces - Order Capital Round 2 (Codeforces Round 1104, Div. 1 + Div. 2)
// URL: https://codeforces.com/problemset/problem/2237/B
// Memory Limit: 256 MB
// Time Limit: 1500 ms
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
vector<int> a(n);
for(int i = 0;i< n;i++){
	cin>>a[i];
}
set<int>b;
for(int i = 0;i< n;i++){
	int x;
	cin>>x;
	b.insert(x);
}
bool pos = true;
vector<int> c(n);
for(int i = 0;i< n;i++){
	auto it = b.lower_bound(a[i]);
	if(it==  b.end()){
		pos = false;
		break;
	}
	c[i] = *it;
	b.erase(it);
}
if(pos == false){
	cout<<-1<<endl;
	return;
}
int ans = 0;
for(int i =0;i< n;i++){
	for(int j = i+ 1;j< n;j++){
		if(c[i] > c[j])ans++;
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