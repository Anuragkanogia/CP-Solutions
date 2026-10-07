// Problem: C. Unrequited Love
// Contest: Codeforces - Codeforces Round 1125 (Div. 3)
// URL: https://codeforces.com/contest/2275/problem/C
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
    vector<int> a(n + 1);
   for(int i =1 ;i<= n;i++){
   	cin>>a[i];
   } 
    vector<int> odd_v, even_v;
    map<int , int> even_freq;

    for (int x = 1; x <= n - 4; ++x) {
       int  val = a[x] + a[x + 2] - a[x + 4];
        if (x % 2 != 0) {
            odd_v.push_back(val);
        } else {
            even_v.push_back(val);
            even_freq[val]++;
        }
    }

   int ans = 0;

    for (long long val : odd_v) {
        if (even_freq.count(val)) {
           ans += even_freq[val];
        }
    }

  map<int,int>freq_odd;
    for (int q = 0; q < odd_v.size(); ++q) {
        if (q >= 3) {
            freq_odd[odd_v[q - 3]]++;
        }
        ans += freq_odd[odd_v[q]];
    }
  map<int,int> freq_even;
    for (int  q = 0; q < even_v.size(); ++q) {
        if (q >= 3) {
            freq_even[even_v[q - 3]]++;
        }
       ans += freq_even[even_v[q]];
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