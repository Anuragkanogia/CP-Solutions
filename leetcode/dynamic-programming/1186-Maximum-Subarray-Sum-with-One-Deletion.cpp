class Solution {
public:
    int maximumSum(vector<int>& arr) {
    int n  = arr.size();
     vector<vector<int>>dp(n+1 , vector<int>(2,0));//0 means not deleting this element , and one means deleting this element
     dp[0][0] = arr[0];
     dp[0][1] = arr[0];
     int maxi = arr[0];
     for(int i = 1;i<n;i++){
       dp[i][0] = max(arr[i] , dp[i-1][0] + arr[i]);
       dp[i][1] = max(dp[i-1][0] , dp[i-1][1] + arr[i]);
       maxi = max(maxi,max(dp[i][0], dp[i][1]));
     }
    return maxi;
    }
};