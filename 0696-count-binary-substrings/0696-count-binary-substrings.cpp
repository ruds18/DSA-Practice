class Solution {
public:
    int countBinarySubstrings(string s) {
        vector<int>v;
        int cnt=1;
        s.push_back(-1);
        for(int i=1; i<s.length(); i++){
            if(s[i] == s[i-1]) cnt++;
            else{
                v.push_back(cnt);
                //reset
                cnt = 1;
            }
        }
        int ans =0;
        for(int i=1 ; i<v.size(); i++){
            ans += min(v[i] , v[i-1]);
        }
        return ans;
    }
};