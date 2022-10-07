class Solution {
public:
    int fillCups(vector<int>& arr) {
        int sec=0;
        sort(arr.begin(), arr.end());
        while(arr[2] > 0){
            arr[2]--;
            sec++;
            if(arr[1] > 0) arr[1] --;
              sort(arr.begin(), arr.end());
        }
        return sec;
    }
};