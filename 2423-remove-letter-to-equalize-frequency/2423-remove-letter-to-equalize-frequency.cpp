class Solution {
public:
    bool equalFrequency(string word) {
        vector<int>freq(26,0);
    
        //calculating frequency
        for(auto i:word){
            freq[i-'a']++;
        }
      
        for(int i=0;i<freq.size();i++){
           vector<int> temp =freq;
            if(freq[i] <=0) continue;
            temp[i]--;
            set<int> st;
            
            for(auto x: temp){
                if(x>0) st.insert(x);
            }
            if(st.size()==1) return true;
        }
        return false;
    }
};
