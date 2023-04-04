class Solution {
public:
    int partitionString(string s) {
        int substringsCount =1;
        set<char>st;
        
        for(auto ch : s){
            if(st.empty()) st.insert(ch);
            else{
                if(st.find(ch) != st.end()){
                    substringsCount++;
                    st.clear();
                }
                st.insert(ch);
            }
        }
        return substringsCount;
     }
};