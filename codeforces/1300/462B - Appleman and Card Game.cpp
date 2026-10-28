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
 int n , k;
 cin>>n>>k;
 string s;
 cin>>s;
 vector<int> freq(26, 0);

 for(int i = 0;i< n;i++){
  freq[s[i] - 'A']++;
 }

 sort(all(freq));
 reverse(all(freq));

 int ans =0;
 for(int i = 0;i<26;i++){
 if(k<= 0)break;
    int add = min(freq[i] , k);
    ans += add*add;
    k-= freq[i];
  
 }
 cout<<ans<<endl;


}
int32_t main()
{
    ios::sync_with_stdio(false);
  cin.tie(nullptr);
  cout.tie(nullptr);

 //sieve();

solve();
}
