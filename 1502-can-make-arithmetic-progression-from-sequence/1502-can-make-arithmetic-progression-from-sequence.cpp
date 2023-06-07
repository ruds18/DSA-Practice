class Solution {
public:
    bool canMakeArithmeticProgression(vector<int>& arr) {
        sort(arr.begin() , arr.end());
        if(arr.size()==2) return true;
        int diff = arr[1] - arr[0];
        vector<int>window(2);
        window[0] = arr[0];
        window[1] = arr[1];
        
        for(int i=2; i<arr.size();i++){
          window.erase(window.begin());
            window.push_back(arr[i]);
            
            if(diff != (window[1] - window[0])){
                return false;
            }
        }
        return true;
    }
};