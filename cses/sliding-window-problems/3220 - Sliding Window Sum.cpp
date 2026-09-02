// Problem: Sliding Window Sum
// Contest: CSES - CSES Problem Set
// URL: https://cses.fi/problemset/task/3220
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
void solve(){
 int n,k;
 cin>>n>>k;
 int x,a ,b, c;
 cin>>x>>a>>b>>c;
vector<int> arr(n);
arr[0]= x;
for(int i =1;i<n;i++){
	arr[i] =( a*arr[i-1] + b)% c;
}

 int sum = 0;
 int ans = 0;
for(int i = 0;i< k;i++){
	sum += arr[i];
} 
ans = sum;

for(int i = k;i< n;i++){
	sum += arr[i];
	sum -= arr[i-k];
	ans = ans^sum;
	
}
cout<<ans<<endl;
    
   }
int32_t main()
{
    ios::sync_with_stdio(false);
  cin.tie(nullptr);
  cout.tie(nullptr);

 //sieve();

solve();
}