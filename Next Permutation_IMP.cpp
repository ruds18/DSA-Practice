class Solution{
public:
   vector<int> nextPermutation(int n, vector<int> arr){
        int ans = INT_MIN;
        for(int i = n - 2; i >= 0; i--){
            if(arr[i] < arr[i + 1]){
                ans = i;
                break;
            }
        }
        if(ans == INT_MIN){
            reverse(arr.begin(), arr.end());
            return arr;
        }
        int k = arr[ans + 1];
        for(int i = n - 1; i > ans; i--){
            if(arr[i] > arr[ans]){
                k = i;
                break;
            }
        }
        swap(arr[k], arr[ans]);
        reverse(arr.begin() + ans + 1, arr.end());
        return arr;
    }
};