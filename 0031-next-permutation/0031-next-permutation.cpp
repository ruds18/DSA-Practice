class Solution {
public:
    void nextPermutation(vector<int>& arr) {
        int index = -1;
        int n = arr.size();
        // finding the first break
        for(int i = n-2; i>=0; i--){
            if(arr[i] < arr[i+1]){
                index = i;
                break;
            }
        }
        if(index == -1){
            reverse(arr.begin() , arr.end());
        }
        else{
             // first greater element than the index
        for(int i= n-1; i>index ; i--){
            if(arr[i] > arr[index]){
                swap(arr[i] , arr[index]);
                break;
            }
        }
        // concatinating the remaining to make up the least 
        reverse(arr.begin() + index + 1 , arr.end()); 
        }
      
    }
};