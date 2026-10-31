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
 int n, m;
 cin>>n>>m;
 string s;
 cin>>s;
 string t;
 cin>>t;
 if(m > n-3){
  cout<<"NO"<<endl;
return;
 }
 map<char,int>freq1;
 map<char,int> freq2;

 for(int i = 0;i< n;i++){
  freq1[s[i]]++;
 }
 for(int i = 0;i< m;i++){
  freq2[t[i]]++;
 }
 for (auto it : freq1) {
        if (it.first == 's' || it.first == 'i' || it.first == 'x') {
            if (it.second != freq2[it.first] + 1) {
                cout << "NO" << endl;
                return;
            }
        }
        else {
            if (it.second != freq2[it.first]) {
                cout << "NO" << endl;
                return;
            }
        }
    }
    for (auto it : freq2) {
        if (freq1[it.first] == 0) {
            cout << "NO" << endl;
            return;
        }
    }

    cout << "YES" << endl;
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