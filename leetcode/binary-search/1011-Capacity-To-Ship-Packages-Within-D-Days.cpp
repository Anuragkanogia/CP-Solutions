class Solution {
public:
    int shipWithinDays(vector<int>& weights, int days) {
        int n = weights.size();
        int lo = 1;
      int sum = 0;
      for(int i = 0;i< n;i++){
        sum += weights[i];
    lo = max(lo , weights[i]);
    }
    int hi = sum;
    
 int ans = n;
    while(lo<= hi){
        int mid = (lo + hi)/2;

        int cntdays = 1;
        int sum = 0;
        for(int i = 0;i< n;i++){
            sum += weights[i];
            if(sum > mid){
                cntdays++;
                sum = weights[i];
            }
        }
        if(cntdays <= days){
            ans = mid;
            hi = mid-1;
        }
        else{
            lo = mid +1;
        }
    }
return ans;
    }
};