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
int cnt = 0;
void merge(vector<int>&a , int lo , int mid, int hi){
  vector<int> temp;

  int left = lo;
  int right = mid+1;
  while(left <= mid && right <= hi){
    if(a[left] <= a[right]){
      temp.push_back(a[left]);
      left++;
    }
    else {
         cnt += (mid- left + 1);
         temp.push_back(a[right]);
         right++;
    }
  }

  while(left<= mid){
    temp.push_back(a[left]);
    left++;
  }
  while(right <= hi){
    temp.push_back(a[right]);
    right++;
  }

  for(int i = lo;i<=hi;i++){
    a[i] = temp[i-lo];
  }
}
void mergesort(vector<int>&a , int lo , int hi){
  if(lo >= hi)return;

  int mid = (lo + hi)/2;
  mergesort(a, lo , mid);
  mergesort(a, mid+ 1, hi);

  merge(a, lo , mid, hi);
}
void solve() {
 int n;
 cin>>n;
 vector<int> a(n);
 for(int i = 0;i< n;i++){
  cin>>a[i];
 }
 cnt = 0;
 mergesort(a, 0 , n-1);

if (cnt <= (1LL * n * (n - 1)) / 2 - 1)
    cout << "YES\n";
else
    cout << "NO\n";
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