class Solution {
public:
    int hardestWorker(int n, vector<vector<int>>& logs) {
        int end = 0, max_d =0, id=0;
        
            for(auto &l : logs){
                if(max_d <= l[1] - end){
                    id = max_d < l[1]-end ? l[0]  : min(id,l[0]);
                    max_d= l[1]-end;
                }
                end = l[1];
            }
        return id;
    }
};