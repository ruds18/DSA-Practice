class Solution {
public:
    bool buddyStrings(string s, string goal) {
        int n = s.size();
        int m = goal.size();
        if(n!=m) return false;
        //case 1
       if(s == goal){
        vector<int>freq(26,0);
        for(auto ch:s){
            freq[ch-'a']++;
            if(freq[ch -'a'] >=2) return true;
        }
           return false;
       }
        
            int index1 = -1;
            int index2 = -1;
        
        //case 2{
     
          for(int i=0;i<n;i++){
              if(s[i] != goal[i]){
                  if(index1 == -1)
                      index1 =i;
                  else if(index2 == -1 && index1 != -1)
                      index2 = i;
                  else return false;
              }
          }
        
        if(index2 == -1) return false;
        
        return s[index1] == goal[index2] && 
               s[index2] == goal[index1];
        
    }
        
};