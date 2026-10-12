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
int k , n;
cin>>k>>n;
 
 set<int> s;
 int curr = 1;
 int d = 1;
 while(curr <  41){
    s.insert(curr);
    curr += d;
    d++;
 }

 int cn = k;
 vector<int> x;
while (cn > 0 && distance(s.begin(), s.lower_bound(n+1)) < cn) {
    x.push_back(n);


    n--;
    cn--;
}


 for(auto it : s){
  if(cn == 0 )break;
  x.push_back(it);
  cn--;
 }
 sort(all(x));
 for(auto it : x)cout<<it<<" ";

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