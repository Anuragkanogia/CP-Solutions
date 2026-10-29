class Solution {
public:
    int mySqrt(int x) {
        int lo  = 1;
        int hi  = x;
        int ans = 0;
        while(lo <= hi){
          long long mid =lo + (hi -lo)/2;
            if(1LL*mid*mid > x){
                hi = mid-1;
            }
            else {
                ans = mid;
                lo = mid+1;
            }
        }
        return ans;
    }
};