class Solution {
public:
    int minEatingSpeed(vector<int>& piles, int h) {
        int n = piles.size();
        int lo = 1;
        long long hi = 1e14;
        long long ans = 1;
        while(lo <= hi){
            long long mid = lo + (hi - lo)/2;

            long long time = 0;
            for(int i = 0;i< n;i++){
                time += (piles[i] + mid - 1 )/ mid;
            }
            if(time <=  h){
                ans = mid;
                hi = mid-1;
            }
            else {
                lo = mid + 1;
            }
        }
        return ans;
    }
};