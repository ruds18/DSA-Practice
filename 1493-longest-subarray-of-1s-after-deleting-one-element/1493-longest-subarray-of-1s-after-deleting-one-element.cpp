class Solution {
public:
   int longestSubarray(vector<int> nums) {
    int left = 0;
    int maxWindow = 0;
    int lastZero = -1;

    for (int right = 0; right < nums.size(); right++) {
        if (nums[right] == 0) {
            left = lastZero + 1;
            lastZero = right;
        }

        maxWindow = max(maxWindow, right - left);
    }
    return maxWindow;
}

int max(int x, int y) {
    if (x > y) {
        return x;
    }
    return y;
}
};