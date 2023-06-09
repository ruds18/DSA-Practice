class Solution {
public:
    char nextGreatestLetter(vector<char>& letters, char target) {
        // binary search
        int ans = letters[0];
        int start =0;
        int end = letters.size()-1;
        
        while(start<=end){
            int mid = (start+end)/2;
            
            if(target < letters[mid]) {ans = letters[mid]; end = mid-1;}
            else start = mid+1;
            
        }
        return ans;
    }
};