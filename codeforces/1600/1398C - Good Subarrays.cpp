// Problem: C. Good Subarrays
// Contest: Codeforces - Educational Codeforces Round 93 (Rated for Div. 2)
// URL: https://codeforces.com/contest/1398/problem/C
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
 string a;
 cin>>a;
 vector<int> pref(n,0);
 pref[0] = a[0] - '0';
 for(int i = 1; i<n;i++){
 	pref[i] = pref[i-1] + (a[i] - '0');
 }
 long long cnt = 0;

map<int, int> mp;
mp[0] = 1;  // prefix before the array

int sum = 0;

for(int i = 0; i < n; i++) {
    sum += a[i] - '0';

    int x = sum - (i + 1);

    cnt += mp[x];
    mp[x]++;
}

cout << cnt << '\n';
    
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