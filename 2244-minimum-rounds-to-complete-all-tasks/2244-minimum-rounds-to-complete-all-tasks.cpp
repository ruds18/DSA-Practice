class Solution {
public:
    int minimumRounds(vector<int>& tasks) {
        int ans = -1;
        stack<int>st;
        
        //step 1
        unordered_map<int,int>mp;
        for(auto task: tasks){
            mp[task]++;
        }
        
       int output=0;
        
        for (auto freq : mp){
            if(freq.second==1)
                return -1;
            if(freq.second%3==0){
                output += freq.second/3;
            }
            else{
                output += freq.second/3 + 1;
            }
        }
        return output;
    }
};