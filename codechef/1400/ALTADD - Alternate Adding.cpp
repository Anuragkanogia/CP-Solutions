// Problem: Alternate Adding
// Contest: CodeChef - START254
// URL: https://www.codechef.com/problems/ALTADD?tab=statement
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
int f(int l , int r , vector<int> &a){
	vector<int> arr;
	for(int i = l;i< r;i++){
		arr.push_back(abs(a[i]));
	}
	arr.push_back(0);
	vector<int> stk = {0};
	int cost = 0;
	for(int x : arr){
		while(stk.back() > x){
			int m = stk.back();
			stk.pop_back();
			int l = stk.back();
			
			cost += m - max(l ,x);
		}
		stk.push_back(x);
	}
	return cost;
}
void solve(){
 int n;
 cin>>n;
 vector<int> a(n+ 1);
 for(int i = 0;i< n;i++){
 	cin>>a[i];
 }
 for(int i = 1;i< n;i+=2)a[i] = -1 *a[i];
 int last = 0;
 int ans = 0;
 for(int i = 1;i<= n;i++){
 	bool flag = (a[i] > 0 && a[i-1] < 0) || 
 				(a[i] < 0 && a[i-1] > 0 ) ||
 				(a[i] == 0);
 	if(flag == true){
 		ans += f(last, i,a);
 		last = i;
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