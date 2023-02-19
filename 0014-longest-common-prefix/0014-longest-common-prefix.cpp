class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
       //sort
       sort(strs.begin() , strs.end());
        
       //first word
       string first = strs[0];
        int len1 = first.length();
        //Last Word
        string last = strs[strs.size()-1];
        int len2 = last.length();
        
        string ans="";
        int it1 =0, it2=0;
        while(it1<len1 && it2<len2){
            if(first[it1] != last[it2]) break;
             ans.push_back(first[it1]);
            it1++;
            it2++;
        }
        return ans;
    }
};