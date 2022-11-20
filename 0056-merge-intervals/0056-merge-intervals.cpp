class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        // Step 1 - Sorting the intervals
        sort(intervals.begin(), intervals.end());
        
        //Step 2 - adding in merged 
        vector<vector<int>> merged;
        
        for(auto interval : intervals){
            // checking from merged  - if empty add it or check for overlapping interval
            if(merged.empty() || merged.back()[1] < interval[0] ){
                // append it
                merged.push_back(interval);
            }else{
                // Overlaping occurs
                merged.back()[1] = max(merged.back()[1] , interval[1]);
            }
        }
        return merged;
    }
};