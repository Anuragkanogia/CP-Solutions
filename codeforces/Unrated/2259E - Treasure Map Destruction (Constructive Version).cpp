// Problem: E. Treasure Map Destruction (Constructive Version)
// Contest: Codeforces - Codeforces Round 1119 (Div. 3)
// URL: https://codeforces.com/contest/2259/problem/E
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
 int n;
 cin>>n;
 vector<int> a(n);
 for(int i  = 0;i< n;i++){
 	cin>>a[i];
 }
  int zero =0;
 for(int i = 0;i< n;i++){
 	if(a[i] == -1)zero++;
 }
 if(zero == n){
 	cout<<1;
 	for(int i =1;i<n;i++){
 		cout<<0;
 	}
 	cout<<endl;
 	return;
 }
 vector<pair<int,int>> v;
 string s(n,'.');
 for(int i = 0;i< n;i++){
 	if(a[i] > 0){
 		v.push_back({max(0LL,i - a[i] + 1),min(n-1,i + a[i] - 1)});
 	}
 	if(a[i] == 0)s[i] = '0';
 }
 vector<int> freq(n+1,0);
 for(int i = 0;i< v.size();i++){
 	int l = v[i].first;
 	int r = v[i].second;
 	freq[l]++;
 	freq[r+1]--;
 }
 for(int i = 1;i< n;i++){
 	freq[i] += freq[i-1];
 }
 for(int i = 0;i< n;i++){
 	if(a[i] >= 0){
 		if(i - a[i] >= 0 && freq[i-a[i]] == 0) {
    s[i-a[i]] = '1';
}
else if(i + a[i] < n && freq[i+a[i]] == 0) {
    s[i+a[i]] = '1';
}
else {
    cout << -1 << endl;
    return;
}
 	}
 }
 for(int i = 0;i <n ;i++){
 	if(s[i] =='.')s[i] = '0';
 }

 cout<<s<<endl;
 
    
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