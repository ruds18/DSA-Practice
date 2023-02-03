class Solution {
public:
    string convert(string s, int numRows) {
        //corner case
        if(numRows == 1) return s;
        int cycle = 2*numRows -2;
        string ans ="";
        // rows
        for(int i=0; i<numRows ;i++){
            // accessing all the elements according to the row
            for(int j=i; j<s.length(); j += cycle)
            {
                ans += s[j];
                
                int k = j+cycle-2*i;
                if(i != 0 &&  i != numRows-1 && k < s.length()){
                    ans += s[k];
                }
            }
        }
        return ans;
    }
};