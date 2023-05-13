class Solution {
public:
    vector<int> replaceElements(vector<int>& arr) {
        int n = arr.size();
        int maxi =-1;
        // O(n)
        
        for(int i= n-1; i>=0; i-- ){
          int temp = arr[i];
            arr[i] = maxi;
            maxi = max(temp, maxi);
            
        }
        return arr;
    }
};