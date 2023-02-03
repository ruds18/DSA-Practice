class Solution {
public:
    string convert(string s, int numRows) {
        if(numRows == 1) return s;
        
        int cycle = 2*numRows -2;
        string ans="";
        for(int i=0; i<numRows;i++){
            for(int j=i; j<s.length(); j+=cycle){
                ans += s[j];
                
                int k= j+cycle-2*i;
                if(i != 0 && i!= numRows-1 && k<s.length()){
                    ans += s[k];
                }
            }
        }
        return ans;
    }
};