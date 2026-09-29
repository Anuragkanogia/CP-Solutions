// Problem: B. Domino Tiles
// Contest: Codeforces - Codeforces Round 1116 (Div. 2)
// URL: https://codeforces.com/contest/2256/problem/B
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
    cin >> n;

    string s;
    cin >> s;

    int ans = 0;

   for(int a = 0; a< 2 ;a++){
   	for(int b = 0;b < 2;b++){
   		string t(n , '0');
   		 t[0] = a +'0';
   		 if(n> 1)t[1] = b + '0';
   		 
   		 
   		 for(int i = 2;i< n;i++){
   		 	if(t[i-2] == '0')t[i] = '1';
   		 	else t[i] = '0';
   		 }
   		 bool f =true;
   		 for(int i = 0;i< n;i++){
   		 	if(s[i] != '?' && s[i] != t[i]){
   		 		f = false;
   		 	}
   		 }
   		 if(f) ans++;
   	}
   
   }
    cout << ans << '\n';
 
 
    
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