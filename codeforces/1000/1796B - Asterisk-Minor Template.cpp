// Problem: B. Asterisk-Minor Template
// Contest: Codeforces - Educational Codeforces Round 144 (Rated for Div. 2)
// URL: https://codeforces.com/problemset/problem/1796/B
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
  string a, b;
        cin >> a >> b;

        // Case 1: same first character
        if (a[0] == b[0]) {
            cout << "YES\n";
            cout << a[0] << "*\n";
          return;
        }

        // Case 2: same last character
        if (a.back() == b.back()) {
            cout << "YES\n";
            cout << "*" << a.back() << "\n";
           return;
        }

        // Case 3: common substring of length 2
        bool found = false;

        for (int i = 0; i + 1 < a.size(); i++) {
            string x = a.substr(i, 2);

            if (b.find(x) != string::npos) {
                cout << "YES\n";
                cout << "*" << x << "*\n";
                found = true;
                break;
            }
        }

        if (!found) {
            cout << "NO\n";
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