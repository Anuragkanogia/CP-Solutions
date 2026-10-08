// Problem: C. Brr Brrr Patapim
// Contest: Codeforces - Codeforces Round 1017 (Div. 4)
// URL: https://codeforces.com/problemset/problem/2094/C
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

int a[n][n];

for(int i = 0; i < n; i++){
    for(int j = 0; j < n; j++){
        cin >> a[i][j];
    }
}

vector<int> ans(2*n + 1, -1);
vector<int> visited(2*n + 1, 0);

for(int i = 0; i < n; i++){
    for(int j = 0; j < n; j++){
        ans[i + j + 2] = a[i][j];
        visited[a[i][j]] = 1;
    }
}

for(int i = 1; i <= 2*n; i++){
    if(ans[i] == -1){
        for(int j = 1; j <= 2*n; j++){
            if(visited[j] == 0){
                ans[i] = j;
                visited[j] = 1;
                break;
            }
        }
    }
}

for(int i = 1; i <= 2*n; i++){
    cout << ans[i] << " ";
}

cout << endl;
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