// Problem: C. RemovevomeR
// Contest: Codeforces - Codeforces Round 1107 (Div. 3)
// URL: https://codeforces.com/problemset/problem/2241/C
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
 
 int n;
 cin>>n;
 string s;
 cin>>s;
 int firstone = -1;
 int lastone= -1;
 int lastzero = -1;
 int firstzero = -1;
 for(int i = 0;i< n;i++){
 	if(s[i]  == '0'){
 		firstzero = i;
 		break;
 	}
 }
  for(int i = 0;i< n;i++){
 	if(s[i]  == '1'){
 		firstone = i;
 		break;
 	}
 }
  for(int i = 0;i< n;i++){
 	if(s[i]  == '0'){
 		lastzero = i;
 		
 	}
 }
  for(int i = 0;i< n;i++){
 	if(s[i]  == '1'){
 		lastone = i;
 		
 	}
 }
 if(firstzero ==-1 || firstone == -1){
 	cout<<1<<endl;
 	return;
 }
 if(firstzero > lastone  || firstone  > lastzero){
 	cout<<2<<endl;
 	return;
 }
 else  cout<<1<<endl;
 
 
    
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