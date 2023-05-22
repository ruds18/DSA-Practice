class Solution {
public:
    int differenceOfSum(vector<int>& nums) {
        int sum =0;
        int digits=0;
       for(auto num : nums){
           sum += num;
           while(num){
               int digit = num%10;
               num = num/10;
               digits += digit;
           }
       } 
        return abs(sum  - digits);
    }
};