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

void solve() {
 string s;
    cin >> s;
    
    // Prepend '0' to handle carry-over for the most significant digit (e.g., 99 -> 100)
    s = '0' + s;
    int n = s.length();
    int zero_pos = n; 
    
    // Iterate from right to left
    for (int i = n - 1; i >= 1; i--) {
        if (s[i] >= '5') {
            s[i - 1]++; // Add 1 to the next digit
            zero_pos = i; // Mark from where we should pad with zeroes
        }
    }
    
    // Replace all digits from zero_pos to the end with '0'
    for (int i = zero_pos; i < n; i++) {
        s[i] = '0';
    }
    
    // If the leading '0' wasn't touched, skip it
    if (s[0] == '0') {
        cout << s.substr(1) << "\n";
    } else {
        cout << s << "\n";
    }
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