class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        int n = nums1.size();
        int m = nums2.size();
       
       stack<int> st;
       vector<int> nextgreater(1e4 + 1, -1);
       for(int i = m-1;i>= 0;i--){
         while(st.empty() == false && st.top() <= nums2[i]){
            st.pop();
         }
         if(st.empty() == true)nextgreater[nums2[i]] = -1;
         else nextgreater[nums2[i]] = st.top();


         st.push(nums2[i]);
       }

       vector<int> ans(n);
       for(int i = 0;i< n;i++){
        ans[i] = nextgreater[nums1[i]];
       }
        return ans;
    }
};