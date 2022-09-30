class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
     int n = strs.size();
        
        if (n==0)
            return "";
        
        string ans = "";
        sort(begin(strs), end(strs));
        
        string a = strs[0];
        string b = strs[n-1];
        
        
        for (int i=0; i<a.size(); i++){
            if (a[i]==b[i]){
                ans = ans + a[i];
            }
            else{
                break;
            }
        }
        return ans;
    }
};