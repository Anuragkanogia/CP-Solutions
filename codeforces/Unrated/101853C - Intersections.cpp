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
#define input(a, n) vector<int> a(n); for(int i = 0; i < n; i++) cin >> a[i];
#define ff first
#define ss second
#define all(x) x.begin(), x.end()
//#define sz(x) (int)(x).size()
const int mod = 1e9 + 7;
#define MOD (1000000007);
const int NUM = 1000030;
const int N = 1e7 + 10;
#define DEBUG(x) cerr << #x << ": " << x << '\n'
int cnt = 0;
void merge(vector<int>& v, int lo , int mid , int hi){
 vector<int>temp;

int left = lo;
int right = mid+1;
while(left <= mid && right <= hi){
  if(v[left] <= v[right]){
    temp.push_back(v[left]);
    left++;
  }
  else {
    cnt += (mid - left + 1);
    temp.push_back(v[right]);
    right++;
  }
 }
   while(left <= mid){
    temp.push_back(v[left]);
    left++;
   }
   while(right <= hi){
    temp.push_back(v[right]);
    right++;
   }

   for(int i = lo;i<=hi;i++){
    v[i] = temp[i-lo];
   }
}
void mergesort(vector<int>& v, int lo , int hi){
  if(lo>= hi)return;

  int mid = (lo + hi)/2;

  mergesort(v, lo , mid);
  mergesort(v, mid + 1, hi);
  merge(v, lo , mid, hi);
}
void solve() {
 int n;
 cin>>n;
  cnt = 0;
 vector<int> a(n);
 for(int i =0;i < n;i++){
  cin>>a[i];
 }
 vector<int> b(n);
 for(int i = 0;i< n;i++){
  cin>>b[i];
 }

 map<int , int> mp;
 for(int i = 0;i< n;i++){
  mp[b[i]] = i+ 1;
 }
 vector<int> v(n);
 for(int i = 0;i< n;i++){
v[i] = mp[a[i]];
 }

mergesort(v,0 , v.size() - 1);

cout<<cnt<<endl;


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