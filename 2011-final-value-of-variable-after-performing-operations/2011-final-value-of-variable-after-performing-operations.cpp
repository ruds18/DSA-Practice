class Solution {
public:
    int finalValueAfterOperations(vector<string>& op) {
        int x = 0;
        for(int i = 0; i < op.size(); i++){
            if(op[i][0]=='+' || op[i][1]=='+')
                x++;
            else
                x--;
        }
        return x;
    }
};