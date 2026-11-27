class Solution {
public:
    string removeDuplicateLetters(string s) {
        stack<char> st;

        vector<int> curr(26, 0);
        vector<int> instack(26, 0);

        for(int i = 0; i < s.size(); i++) {
            curr[s[i] - 'a']++;
        }

        for(int i = 0; i < s.size(); i++) {

            curr[s[i] - 'a']--;

            if(instack[s[i] - 'a']) continue;

            while(st.empty() == false &&
                  st.top() > s[i] &&
                  curr[st.top() - 'a'] > 0) {

                char ch = st.top();
                st.pop();

                instack[ch - 'a'] = 0;
            }

            st.push(s[i]);
            instack[s[i] - 'a'] = 1;
        }

        string ans = "";

        while(st.empty() == false) {
            ans += st.top();
            st.pop();
        }

        reverse(ans.begin(), ans.end());

        return ans;
    }
};