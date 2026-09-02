// Problem: C. New Year and Domino
// Contest: Codeforces - Good Bye 2015
// URL: https://codeforces.com/problemset/problem/611/C
// Memory Limit: 256 MB
// Time Limit: 3000 ms
// 
// Powered by CP Editor (https://cpeditor.org)

#include <bits/stdc++.h>
#define ll long long
//#define int long long 
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
 
    int n, m;
    cin >> n >> m;

    vector<vector<char>> a(n + 1, vector<char>(m + 1));

    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= m; j++) {
            cin >> a[i][j];
        }
    }

    vector<vector<int>> hor(n + 1, vector<int>(m + 1, 0));
    vector<vector<int>> ver(n + 1, vector<int>(m + 1, 0));

    // Mark individual dominoes
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= m; j++) {

            // Horizontal domino ending at (i,j)
            if (j > 1 && a[i][j] == '.' && a[i][j-1] == '.')
                hor[i][j] = 1;

            // Vertical domino ending at (i,j)
            if (i > 1 && a[i][j] == '.' && a[i-1][j] == '.')
                ver[i][j] = 1;
        }
    }

    // 2D prefix sums
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= m; j++) {

            hor[i][j] += hor[i-1][j]
                       + hor[i][j-1]
                       - hor[i-1][j-1];

            ver[i][j] += ver[i-1][j]
                       + ver[i][j-1]
                       - ver[i-1][j-1];
        }
    }

    auto query = [&](vector<vector<int>>& pref,
                     int r1, int c1, int r2, int c2) {

        if (r1 > r2 || c1 > c2)
            return 0;

        return pref[r2][c2]
             - pref[r1-1][c2]
             - pref[r2][c1-1]
             + pref[r1-1][c1-1];
    };

    int q;
    cin >> q;

    while (q--) {

        int r1, c1, r2, c2;
        cin >> r1 >> c1 >> r2 >> c2;

        int ans = 0;

        // Horizontal domino:
        // left cell must be >= c1
        // right endpoint is >= c1+1
        ans += query(hor, r1, c1 + 1, r2, c2);

        // Vertical domino:
        // top cell must be >= r1
        // bottom endpoint is >= r1+1
        ans += query(ver, r1 + 1, c1, r2, c2);

        cout << ans << '\n';
    }
    
   }
int32_t main()
{
    ios::sync_with_stdio(false);
  cin.tie(nullptr);
  cout.tie(nullptr);

 //sieve();
  

solve();

}