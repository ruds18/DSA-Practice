class Solution {
public:
    
    bool isGoodSubstring(vector<int>counts){
        return (counts[0] >=1 && counts[1]>=1 && counts[2]>=1);
    }
    
    int numberOfSubstrings(string s) {
        
        vector<int>counts(3,0);
        int n = s.size();
        int i=0;
        int j=0;
        int ans =0;
        
        while(j<n){
            counts[s[j] - 'a']++;
            
            if(!isGoodSubstring(counts)){
                j++;
            }else{
                while(isGoodSubstring(counts)){
                    ans += n - j;
                    counts[s[i]-'a']--;
                    i++;
                }
                j++;
            }
        }
        return ans;
    }
};