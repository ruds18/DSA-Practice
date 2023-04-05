class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        unordered_map<char,int>mp;
        int n= ransomNote.size();
        for(auto ch:magazine){
            mp[ch]++;
        }
        
        for(int i=0; i<n;i++){
            char ch = ransomNote[i];
            cout<<mp[ch]<<" ";
            if(mp[ch] >0){
                mp[ch]--;
            }else return false;
        }
        return true;
    }
};