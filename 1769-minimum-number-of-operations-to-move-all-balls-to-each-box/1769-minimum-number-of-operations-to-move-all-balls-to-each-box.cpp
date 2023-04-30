class Solution {
public:
    vector<int> minOperations(string boxes) {
        int n = boxes.size();
        vector<int>ans(n);
        int count =0 , operations =0;
        
        //forward
        for(int i=0; i<n;i++){
            ans[i] += operations;
            count  += boxes[i] -'0';
            operations += count;
        }
        operations =0 , count=0;
        //backward
        for(int i =n-1 ; i>=0; i--){
            ans[i] += operations;
            count += boxes[i]-'0';
            operations += count;
        }
        
        return ans;
    }
};