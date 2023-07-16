class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        unordered_map<int,int>mp;
        int n = s.size();
        int left=0;
        int ans=0;
        for(int right=0; right<n;right++){
            mp[s[right] - 'a']++;
            while(left<n && mp.size() != (right-left+1)){
                mp[s[left]-'a']--;
                if(mp[s[left]-'a'] == 0) mp.erase(s[left]-'a');
                left++;
            }
            cout<<left<<"->"<<right<<endl;
            ans = max(ans,right-left+1);
        }
        return ans;
    }
};