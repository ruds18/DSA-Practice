class Solution {
public:
    int hardestWorker(int n, vector<vector<int>>& logs) {
        int end_work = 0, max_d =0, id=0;
        
            for(auto &l : logs){
                if(max_d <= l[1] - end_work){
                    id = max_d < l[1]-end_work ? l[0]  : min(id,l[0]);
                    max_d= l[1]-end_work;
                }
                end_work = l[1];
            }
        return id;
    }
};