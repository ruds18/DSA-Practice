class Solution {
public:
    int hardestWorker(int n, vector<vector<int>>& logs) {
        int work = logs[0][1];
        int id = logs[0][0];
        
        for(int i=1;i<logs.size();i++){
            int dif = logs[i][1] - logs[i-1][1];
            if(dif>work){
                work = dif;
                id = logs[i][0];
            }else{
                if(dif == work){
                    if(id > logs[i][0]){
                        id = logs[i][0];
                    }
                }
            }
        }
        return id;
    }
};