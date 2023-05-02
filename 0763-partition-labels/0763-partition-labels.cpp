class Solution {
public:
    vector<int> partitionLabels(string s) {
        int n = s.size();
        vector<int>lastIndex(26);
        vector<int>ans;
        //corner case
        if(s.size() == 0) return ans;
        
        for(int i=0; i<n; i++){
            lastIndex[s[i] - 'a'] = i;
        }
        int start =0, end =0;
        for(int i=0; i<n ; i++){
            end = max(end , lastIndex[s[i]-'a']);
            if(end == i){
                ans.push_back(end-start + 1);
                start = end+1;
            }
        }
        return ans;
    }
};