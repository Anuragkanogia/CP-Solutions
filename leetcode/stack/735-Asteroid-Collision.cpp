class Solution {
public:
    vector<int> asteroidCollision(vector<int>& asteroids) {
        stack<int> st;
        int n = asteroids.size();
        for(int i = 0;i< n;i++){
            if(asteroids[i] > 0 ){
                st.push(asteroids[i]);
            }
            else {

                bool destroyed = false;
                while(st.empty() == false && st.top() > 0){
                    if(st.top()   < abs(asteroids[i]))st.pop();
                    else if(st.top() == abs(asteroids[i])){
                        st.pop();
                        destroyed = true;
                        break;
                    }         
                    else if(st.top() > abs(asteroids[i])){
                        destroyed = true;
                        break;
                    }       
                }
           if(destroyed == false)st.push(asteroids[i]);
    
                }
        }
        vector<int> ans;
    while(st.empty() == false){
        ans.push_back(st.top());
        st.pop();
    }
    reverse(ans.begin() , ans.end());
    return ans;
    }
};