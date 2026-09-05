// Problem: B. Minus Two
// Contest: Codeforces - Codeforces Round 1119 (Div. 3)
// URL: https://codeforces.com/contest/2259/problem/B
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
    cin >> n;

    vector<int> a(n);
    map<int, int> freq;
    int odd_count = 0;
    int even_count = 0;
    int four =0;
    int two =0;
    int max_orig_freq = 0;

    for (int i = 0; i < n; ++i) {
        cin >> a[i];
        
        freq[a[i]]++;
        max_orig_freq = max(max_orig_freq, freq[a[i]]);

        if (a[i] % 2 != 0) {
            odd_count++;
        } else {
            if(a[i] %4 == 0){
            	four++;
            }
            else if(a[i] %2 == 0)two++;
        }
    }

  cout<<max(odd_count ,max(four, two))<<endl;
 
 
    
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