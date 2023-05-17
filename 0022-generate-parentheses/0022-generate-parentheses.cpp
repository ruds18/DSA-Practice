class Solution {
public:
    void solve(vector<string>&ans,string result ,  int open , int close , int n){
        //base case
        if(result.size() == n*2){
          ans.push_back(result);
            return;
        }
        
        if(open < n) solve(ans, result + "(",open+1,close,n);
        if(close < open) solve(ans , result + ")" , open , close+1 ,n);
    }
    
    vector<string> generateParenthesis(int n) {
        vector<string>ans;
        string result="";
        int open =0;
        int close =0;
        
         solve(ans , result , open , close , n);
        
        return ans;
    }
};