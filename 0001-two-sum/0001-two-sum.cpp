class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> ans;
       vector<pair<int,int>> v;
        for(int i=0 ; i<nums.size(); i++){
            v.push_back({nums[i], i});
        }
        //soritng the vector
        sort(v.begin(), v.end());
        int low =0, high = nums.size()-1,  index1=0 ,index2=0;
        //traversing the vector
        while(low < high){
            if(v[low].first + v[high].first  == target) {
                index1 = v[low].second;
                index2 = v[high].second;
                ans.push_back(index1);
                ans.push_back(index2);
                break; // since only one solution is available
            } else if(v[low].first + v[high].first >  target) {
                high--;
            }else{
                low++;
            }
        }
        return ans;
    }
};