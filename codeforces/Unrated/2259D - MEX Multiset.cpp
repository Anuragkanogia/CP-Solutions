// Problem: D. MEX Multiset
// Contest: Codeforces - Codeforces Round 1119 (Div. 3)
// URL: https://codeforces.com/contest/2259/problem/D
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
 int zeroind =-1;
 int zero = 0;
 for(int i = 0 ;i< n;i++){
 	cin>>a[i];
 	if(a[i] == 0){zero++;
 	zeroind = i;
 	}
 }
 if(zero < 2 && zero != 0){
 	cout<<"NO"<<endl;
 	return;
 }
string s(n, '.');
 if(zero > 0){
 	s[zeroind] = 'A';
 	for(int i = 0 ;i< n;i++){
 		  if(a[i] == 0 && i != zeroind)
            s[i] = 'B';
        else if(a[i] != 0)
            s[i] = 'C';
 	}
 }
 else {
 	s[0] = 'A';
 	s[1] = 'B';
 	for(int i = 2;i< n;i++){
 		s[i]= 'C';
 	}
 }
 cout<<"YES"<<endl;
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