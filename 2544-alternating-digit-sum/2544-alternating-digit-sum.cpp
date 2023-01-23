class Solution {
public:
    
    void getSum(int n , int &sum , bool &sign){
        //base case
        if(!n) return;
        
        int digit = n%10;
        n = n/10;
        
        // rr
        getSum(n , sum, sign);
        // vapas aate hue
        if(sign) sum+= digit; else sum -= digit;
        sign =!sign;
        
    }
    int alternateDigitSum(int n) {
        bool sign = true;
        int sum =0;
        getSum(n , sum , sign);
        return sum;
    }
};