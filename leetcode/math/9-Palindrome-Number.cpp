class Solution {
public:
    bool isPalindrome(int x) {
        if(x< 0)return false;
     vector<int>a;
     while(x != 0 ){
        a.push_back(x%10);
        x = x/10;
     }
      int i = 0;
      int n = a.size();
      while(i < n){
        if(a[i] != a[n-i-1]){
            return false;
        }
        i++;
      }
      return true;
     
    }
};