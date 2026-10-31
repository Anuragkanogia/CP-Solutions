class Solution {
public:
    int findPeakElement(vector<int>& nums) {
        int n = nums.size() -1;
        int lo = 0;
        int hi = n-1;
        int ans = -1;
        while(lo<= hi){
            int mid = (lo + hi)/2;

            if(nums[mid] < nums[mid + 1]){
                ans = mid;
                lo = mid+1;
            }
            else {
                hi = mid-1;
            }
        }
        return ans + 1;
    }
};