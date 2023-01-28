class Solution {
public:
    int longestPalindrome(string s) {
        int result = 0;
        //step 1
        unordered_map<char , int>mp;
        for(int i=0; i<s.length();i++){
            mp[s[i]]++;
        }
        //step 2
        for(auto iter:mp){
         result += iter.second/2 * 2;
         if(result%2 == 0 && iter.second % 2 ==1 ) result += 1;
        }
        return result;
    }
};