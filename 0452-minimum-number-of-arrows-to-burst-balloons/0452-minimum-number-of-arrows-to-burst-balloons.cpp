class Solution {
public:
    int findMinArrowShots(vector<vector<int>>& points) {
        vector<vector<int>>merged;
        int cnt =1; // there will be always one balloon
        //step 1  - sort
        sort(points.begin() , points.end());
        
        for(auto point : points){
            if(merged.empty()) merged.push_back(point);
            if( merged.back()[1] < point[0]){
                cnt++;
                merged.back()[1] = point[1];
            }else{
                merged.back()[1] = min(merged.back()[1] , point[1]);
            }
        }
        return cnt;
    }
};