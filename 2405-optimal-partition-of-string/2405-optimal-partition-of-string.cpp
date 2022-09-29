class Solution {
public:
    int partitionString(string s) {
        set<char>st;
        int ans=1; //atleast there will be one substring
        for(auto i:s){
            //element is already present in the set
            if(st.find(i) != st.end()){
                st.clear();
                ans++;
            }
            st.insert(i);
        }
        return ans;
    }
};