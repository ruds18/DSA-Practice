class Solution {
public:
    
    void generate(vector<string>&ans , string output , int openCnt , int closeCnt , int n){
        //base case
        if(openCnt>=n && closeCnt >= openCnt){
            ans.push_back(output);
            return;
        }
        
        // left call
        if(openCnt<n) generate(ans , output+"(", openCnt+1 , closeCnt , n);
            //right call
        if(closeCnt < openCnt) generate(ans , output +")" , openCnt , closeCnt+1, n);
    }
    
    vector<string> generateParenthesis(int n) {
        vector<string>ans;
        string levelOutput="";
        generate(ans ,levelOutput, 0, 0, n);
        return ans;
    }
};