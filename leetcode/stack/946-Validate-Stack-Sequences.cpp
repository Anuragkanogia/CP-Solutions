class Solution {
public:
    bool validateStackSequences(vector<int>& pushed, vector<int>& popped) {
     int n = pushed.size();
     int i = 0;
     int j = 0;
     stack<int> st;
     while(i < n){
        if(pushed[i] == popped[j]){
            i++;
            j++;
        }
        else if(st.empty() == false && st.top() == popped[j]){
            st.pop();
            j++;
        }
        else{
            st.push(pushed[i]);
            i++;
        }
     }   
     while(j < n){
        if(st.top() != popped[j]){
            return false;
        }
        st.pop();
        j++;
     }
     return true;
    }
};