class Solution {
public:
    int finalValueAfterOperations(vector<string>& operations) {
        int ans =0;
        for(auto operation : operations){
            for(auto ops : operation){
                
                if(ops == '-') {ans--; break;}
                if(ops == '+') {
                    ans++;
                    break;
                }
            }
        }
        return ans;
    }
};