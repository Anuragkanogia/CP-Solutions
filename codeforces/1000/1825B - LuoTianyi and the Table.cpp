// Problem: B. LuoTianyi and the Table
// Contest: Codeforces - Codeforces Round 872 (Div. 2)
// URL: https://codeforces.com/contest/1825/problem/B
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
 
 int n,m;
 cin>>n>>m;
 int k = n*m;
 k = n* m;
 vector<int>a(k);
 for(int i = 0;i< k;i++){
 	cin>>a[i];
 }
 sort(all(a));
 int smallest = a[0];
 int secondsmallest = a[1];
 int largest = a[k-1];
 int secondlargest = a[k-2];
 
 int x = max(n, m);
int y = min(n, m);
int ans = (largest - smallest) *(x-1) *(y) + max(largest - secondsmallest , secondlargest - smallest) *(y-1);
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