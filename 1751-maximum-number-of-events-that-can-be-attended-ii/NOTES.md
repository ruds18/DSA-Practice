```
class Solution {
public:
int maxPoints(vector<vector<int>>events,int index  ,int prev ,int k , vector<vector<vector<int>>> &dp){
//base case
if(index >= events.size() || k==0) return 0;
​
if(dp[index][prev+1][k]!=-1){
return dp[index][prev+1][k];
}
int not_pick=maxPoints(events , index+1, prev , k , dp);
int pick=INT_MIN;
if(prev == -1 || events[prev][1]<events[index][0]){
pick=events[index][2]+maxPoints(events, index+1, index , k-1,dp);
}
return dp[index][prev+1][k]=max(pick,not_pick);
}
int maxValue(vector<vector<int>>& events, int k) {
sort(events.begin(), events.end());
int n = events.size();
vector<vector<vector<int>>>dp(n+1,vector<vector<int>>(n+1,vector<int>(k+1,-1)));
return maxPoints(events, 0 , -1 , k,dp);
}
};
```