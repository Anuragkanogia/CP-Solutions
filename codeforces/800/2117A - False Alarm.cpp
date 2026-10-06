// Problem: A. False Alarm
// Contest: Codeforces - Codeforces Round 1029 (Div. 3)
// URL: https://codeforces.com/problemset/problem/2117/A
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
 
 int n,x;
 cin>>n>>x;
 vector<int> a(n);
 for(int i = 0; i< n;i++){
 	cin>>a[i];
 }
 
 int first = 0;
 int last = 0;
 for(int i = 0;i< n;i++){
 	if(a[i] == 1){
 		first = i;
 		break;
 	}
 }
 for(int i = 0;i< n;i++){
 	if(a[i] == 1){
 		last = i;
 	}
 }
    if(first == -1){
    	cout<<"YES"<<endl;
    	return;
    }
     if(last - first + 1 <= x){
    	cout<<"YES"<<endl;
    }
    else{
    	cout<<"NO"<<endl;
    }
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