class Solution {
public:
    string addStrings(string num1, string num2) {
         string ans;
        int len1 =num1.length()-1 , len2 = num2.length()-1, carry =0;
        while(len1>=0 || len2>=0 || carry){
            long sum =0;
            if(len1>=0) {sum += (num1[len1] - '0'); len1--; }
            if(len2>=0) {sum += (num2[len2] - '0'); len2--; }
            
            sum += carry;
            carry = sum/10;
            sum = sum%10;
            
            ans =to_string(sum) +  ans;
        }
        return ans;
    }
};