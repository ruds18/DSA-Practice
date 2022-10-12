class Solution {
public:
    bool checkDistances(string s, vector<int>& distance) {
        vector<int> v(26,-1);
        for(int i =0;i<s.size();i++){
            int index = s[i]-'a';
            
            //check distance only if it occured twice
            if(v[index] != -1 && ((i-v[index]-1) != distance[index] )) return false;
            v[index] = i;
        }
        return true;
    }
};