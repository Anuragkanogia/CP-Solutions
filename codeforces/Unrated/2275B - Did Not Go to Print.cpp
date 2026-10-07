// Problem: B. Did Not Go to Print
// Contest: Codeforces - Codeforces Round 1125 (Div. 3)
// URL: https://codeforces.com/contest/2275/problem/B
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
 cin>>n;
 string s;
 cin>>s;
 stack<pair<char ,int>> st;
 
 vector<int> ans;
 for(int i = 0;i< n;i++){
 	if(s[i] == '1'){
 		st.push({s[i] , i+1});
 	}
 	else if(s[i] == '2'){
 		if(st.empty() == false){
 			st.pop();
 			ans.push_back(i+1);
 		}
 	}

 }
 while(st.empty() == false){
 	int id = st.top().second;
 	ans.push_back(id);
 	st.pop();
 }
 sort(all(ans));
 cout<<ans.size()<<endl;
 for(auto it : ans)cout<<it<<" ";
 
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