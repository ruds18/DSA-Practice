class Solution {
public:
    
    void getSum(int n , int &sum , bool&flag){
        //base case
        if(!n) return;
        int digit = n%10;
        n= n/10;
        //rr
        getSum(n , sum,flag);
        //vapas aate hue
        //backtrack
        if(flag) sum +=digit ; else sum -=digit;
        flag = !flag;
    }
    
    int alternateDigitSum(int n) {
        int sum =0;
        bool flag = true;
        getSum(n , sum,flag);
        return sum;
    }
};