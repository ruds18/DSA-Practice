class Solution {
public:
    vector<vector<string>> partition(string s) {
      vector<vector<string>>result;
        vector<string>curList;
        dfs(result , curList , s ,0);
        return result;
    }
    void dfs(vector<vector<string>>&result , vector<string>&curList , string s ,int start){
        if(start >= s.length()) result.push_back(curList);
        for(int end = start; end < s.length(); end++){
            if(isPalindrome(s , start , end)){
                curList.push_back(s.substr(start , end-start+1));
                dfs(result , curList , s , end+1);
                //backtrack
                curList.pop_back();
            }
        }
    }
    bool isPalindrome(string s , int start , int end){
        while(start < end){
            if(s[start++] != s[end--]) return false;
        }
        return true;
    }
};