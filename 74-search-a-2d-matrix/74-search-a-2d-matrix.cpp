class Solution {
public:
    bool searchMatrix(vector<vector<int>>& arr, int target) {
        //applying binary search
        int row = arr.size(), col = arr[0].size();
        int low = 0 , high = row*col-1;
        
        
        while(low <= high){
            int mid = low + (high-low)/2;
            int element  = arr[mid/col][mid%col];
            
            if(target == element) return true;
            else if(target > element) low = mid+1;
            else high = mid-1;
        }
        return false;
    }
};