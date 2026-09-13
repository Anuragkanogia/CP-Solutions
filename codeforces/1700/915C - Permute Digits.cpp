// Problem: C. Permute Digits
// Contest: Codeforces - Educational Codeforces Round 36 (Rated for Div. 2)
// URL: https://codeforces.com/problemset/problem/915/C
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
 
 string s, t;
cin >> s >> t;

vector<int> freq(10, 0);

for (char c : s) {
    freq[c - '0']++;
}
if(s.size() < t.size()){
	sort(all(s));
	reverse(all(s));
	cout<<s<<endl;
	return;
}

string ans = "";

for (int pos = 0; pos < s.size(); pos++) {

    // Try the largest possible digit first
    for (int d = 9; d >= 0; d--) {

        if (freq[d] == 0)
            continue;

        // No leading zero
        if (pos == 0 && d == 0)
            continue;

        // Temporarily use this digit
        freq[d]--;

        // Construct the minimum possible suffix
        string run = ans;
        run += char('0' + d);

        for (int x = 0; x <= 9; x++) {
            for (int j = 0; j < freq[x]; j++) {
                run += char('0' + x);
            }
        }

        // Check if this choice is possible
        if (run <= t) {
            ans += char('0' + d);
            break;
        }

        // This digit was too large, restore it
        freq[d]++;
    }
}

cout<< ans<<endl;
    
   }
int32_t main()
{
    ios::sync_with_stdio(false);
  cin.tie(nullptr);
  cout.tie(nullptr);

 //sieve();

solve();

}