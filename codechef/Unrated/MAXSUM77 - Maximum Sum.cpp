#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
        int t;
        cin>>t;
        while(t--){
            int n,k;
            cin>>n>>k;
            vector<int>a(n);
            int sum = 0;
            for(int i = 0;i< n;i++){
                cin>>a[i];
                sum += a[i];
            }
        int len = n - k;

int ans = 0;
for (int i = 0; i < len; i++) {
    ans += a[i];
}

int res = ans;
for (int i = len; i < n; i++) {
    ans += a[i];
    ans -= a[i - len];
    res = max(res, ans);
}
cout<<res<<endl;
        }
}
