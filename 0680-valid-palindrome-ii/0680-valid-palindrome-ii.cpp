class Solution {
public:
    bool validPalindrome(string s) {
        int n = s.size();
        int index1=0;
        int index2 = n-1;
        
        while(index1  <= index2){
            if(s[index1] != s[index2]){
                return isPalindrome(s,index1+1, index2) || isPalindrome(s,index1, index2-1);
            }
            index1++;
            index2--;
        }
        return true;
    }
    bool isPalindrome(string s, int index1, int index2){
        while(index1<index2){
            if(s[index1] != s[index2]) return false;
                index1++;
                index2--;
        }
      return true;
    }
};