// Author: Anurag 
// 
// Problem: A. Jellyfish and Game
// Contest: Codeforces - Codeforces Round 901 (Div. 1)
// URL: https://codeforces.com/problemset/problem/1874/A
// Memory Limit: 256 MB
// Time Limit: 1000 ms

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
 
int n , m, k;
cin>>n>>m>>k;
vector<int> jelly(n);
vector<int> gelly( m);
int score = 0;

for(int i = 0;i<n;i++){
	cin>>jelly[i];

} 
for(int i = 0;i< m;i++){
	cin>>gelly[i];
}
sort(all(jelly));
sort(all(gelly));
if(gelly[m - 1] > jelly[0]) {

    swap(jelly[0], gelly[m - 1]);
}



if (k % 2 == 0) {
        auto max_a = max_element(all(jelly));
        auto min_b = min_element(all(gelly));
        if (*max_a > *min_b) {
            swap(*max_a, *min_b);
        }
    }
for (int x : jelly) score += x;
cout << score << '\n';
    
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