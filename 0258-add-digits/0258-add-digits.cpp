class Solution {
public:
    void solve(int num , int &sum){
        //base case
        if(num == 0){
            if(sum > 9){
                num = sum;
                sum =0;
            }else return  ;
        }
        
        sum += num%10;
        num = num/10;
        
        solve(num , sum);
        
    }
    int addDigits(int num) {
        int sum =0;
        solve(num , sum);
        return sum;
    }
};