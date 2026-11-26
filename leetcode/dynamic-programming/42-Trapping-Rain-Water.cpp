class Solution {
public:
    int trap(vector<int>& height) {
   int n= height.size();
   vector<int> leftgreatest(n , 0) , rightgreatest(n , 0);

   stack<int> st;
   for(int i = n-1;i >= 0;i--){
    while(st.empty() == false && st.top() <= height[i]){
        st.pop();
    }

    if(st.empty() == true){
        rightgreatest[i] = -1;
    }
    else {
        rightgreatest[i] = st.top();
    }
    if(st.empty() == true || height[i] > st.top()){
        st.push(height[i]);
    }
   }
   st  = {};
     for(int i = 0;i <n ;i++){
    while(st.empty() == false && st.top() <= height[i]){
        st.pop();
    }

    if(st.empty() == true){
        leftgreatest[i] =-1;
    }
    else {
        leftgreatest[i] = st.top();
    }
    if(st.empty() == true || height[i] > st.top()){
        st.push(height[i]);
    }
   }
   int ans = 0;
   for(int i = 0;i< n;i++){
  if(leftgreatest[i] == -1 || rightgreatest[i] == -1)continue;

  ans += min(leftgreatest[i] , rightgreatest[i]) - height[i];
   }
   return ans;
    }
};