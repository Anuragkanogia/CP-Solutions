// Problem: D. Precision Alignment
// Contest: Codeforces - Codeforces Round 1125 (Div. 3)
// URL: https://codeforces.com/contest/2275/problem/D
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

bool possible(int n, int k , int mid,vector<int>a, vector<int>b , vector<int> c){
	int total = 0;
	
	for(int i = 0;i< n;i++){
		int curr = 0;
		int sum = a[i] + b[i] + c[i];
		
		if(sum>= mid)continue;
		
		if(a[i] == b[i] && b[i]== c[i])return false;
		
		if(a[i] <= b[i] && b[i] <= c[i]){
			int tmp = min(b[i] - a[i] +1 , c[i] - b[i] + 1);
			tmp *= 2;
			curr += tmp;
		}
		curr += (mid-sum);
		total += curr;
		if(total > k)return false;
	}
	return true;
}
void solve(){
 int n ,k;
 cin>>n>>k;
 vi a(n) , b(n),c(n);
 
 for(int i = 0;i< n;i++){
 	cin>>a[i]>>b[i]>>c[i];
 }
 int lo = -3*1e18;
 int hi =3* 1e18;
 int ans = 0;
while(lo<= hi){
	int mid = lo + (hi -lo)/2;
	
	if(possible(n , k , mid, a,b,c)){
		ans = mid;
		lo = mid+1;
	}
	else {
		hi = mid-1;
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