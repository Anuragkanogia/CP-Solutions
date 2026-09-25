class Solution {
public:
    bool isPalindrome(int x) {
      string s= to_string(x);
      int i = 0;
      while(i<s.size()){
        if(s[i] != s[s.size() - i-1]){
            return false;
        }
        i++;
      }
      return true;
    }
};