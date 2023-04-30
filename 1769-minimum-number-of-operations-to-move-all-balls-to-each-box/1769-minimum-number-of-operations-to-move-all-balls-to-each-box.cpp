class Solution {
public:
    vector<int> minOperations(string boxes) {
        vector<int>ans;
        int n = boxes.size();
        for(int i =0 ;i<n;i++){
            int operations=0;
            for(int j=0; j<n ;j++){
                if(j==i)continue;
                if(boxes[j] == '1'){
                     operations +=  abs(j-i);
                }
            }
            ans.push_back(operations);
        }
        return ans;
    }
};