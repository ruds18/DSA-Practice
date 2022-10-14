class Solution {
public:
    int firstUniqChar(string s) {
        int ans=-1;
        //step 1 - calculate the frequency
        vector<int>freq(26,0); 
        for(auto i:s){
            freq[i- 'a']++;
        }
        
        //Step 2- return whose occurrence is one
        for(int i =0; i<s.size();i++){
            if(freq[s[i]-'a'] == 1) {ans = i; break;}
        }
        return ans;
    }
};