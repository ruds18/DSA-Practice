class Solution {
public:
    
    bool isPalindrome(string word){
       int l=0; int r=word.size()-1;
            while(l<r){
                if(word[l++] != word[r--]) return false;
            }
    return true; 
    }
    
    string firstPalindrome(vector<string>& words) {
        string ans ="";
        bool check = false;
        for(auto word: words){
            check = isPalindrome(word);
            if(check) {ans = word; break;}else continue;
         }
                return ans;
        }
};