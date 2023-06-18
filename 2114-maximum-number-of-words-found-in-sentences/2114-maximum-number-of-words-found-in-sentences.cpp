class Solution {
public:
    int mostWordsFound(vector<string>& sentences) {
        int ans =0;
        
        for(auto str : sentences){
            int cnt=1;
            cout<<str;
            for(auto word : str){
                 if(word == ' ')cnt++;
            }
            ans = max(ans,cnt);
        }
        
        
        
        return ans;
    }
};