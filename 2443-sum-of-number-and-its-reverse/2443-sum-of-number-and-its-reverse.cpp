class Solution {
public:
    int getReverse(int num){
        long val=0;
        while(num){
             val = val *10 + (num % 10);
             num /= 10;
        }
        return val;
    }
    
    bool sumOfNumberAndReverse(int num) {
      if(num == 0) return true;
        for( int i=num/2; i<num;i++){
            if((i + getReverse(i)) == num) return true;
        }
        return false;
    }
};