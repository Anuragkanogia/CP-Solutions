// Problem: C. 101
// Contest: Codeforces - Codeforces Round 1119 (Div. 3)
// URL: https://codeforces.com/contest/2259/problem/C
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
    
    int first_1 = -1, last_1 = -1;
    int first_neg1 = -1, last_neg1 = -1;

    for (int i = 0; i < n; ++i) {
        cin >> a[i];
        if (a[i] == 1) {
            if (first_1 == -1) first_1 = i;
            last_1 = i;
        } else if (a[i] == -1) {
            if (first_neg1 == -1) first_neg1 = i;
            last_neg1 = i;
        }
    }
    if (first_1 == -1 && first_neg1 == -1) {
        for (int i = 0; i < n; ++i) {
           cout<<a[i] <<" ";
        }
       cout<<endl;
        return;
    }

 
    if (first_1 == -1) {
        for (int i = 0; i < n; ++i) {
            if (a[i] == -1) a[i] = 0;
        }
        a[first_neg1] = 1;
        a[last_neg1] = 1;
        for (int i = 0; i < n; ++i) {
            cout<<a[i] <<" ";
        }
     cout<<endl;
        return;
    }

    // Case 3: We have existing 1s (and possibly -1s)
    int best_L = first_1;
    int best_R = last_1;
    int max_dist = best_R - best_L + 1;
    if (first_neg1 != -1 && first_neg1 < first_1) {
        int dist = last_1 - first_neg1 + 1;
        if (dist > max_dist) {
            max_dist = dist;
            best_L = first_neg1;
            best_R = last_1;
        }
    }
    if (last_neg1 != -1 && last_neg1 > last_1) {
        int dist = last_neg1 - first_1 + 1;
        if (dist > max_dist) {
            max_dist = dist;
            best_L = first_1;
            best_R = last_neg1;
        }
    }
    if (first_neg1 != -1 && last_neg1 != -1) {
        int dist = last_neg1 - first_neg1 + 1;
        if (dist > max_dist) {
            max_dist = dist;
            best_L = first_neg1;
            best_R = last_neg1;
        }
    }
    for (int i = 0; i < n; ++i) {
        if (a[i] == -1) a[i] = 0;
    }
    a[best_L] = 1;
    a[best_R] = 1;

    for (int i = 0; i < n; ++i) {
        cout<<a[i] <<" ";
    }
    cout<<endl;
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