class Solution {
public:
    int n;
    int dp[15][50000];
    int recur(int ind,int mask,vector<int>&nums){
        if(ind==n/2)
            return 0;
        if(dp[ind][mask]!=-1)
            return dp[ind][mask];
            
        int ma=0;
        for(int i=0;i<n;i++)
        {
            for(int j=i+1;j<n;j++)
            {
                if((mask&(1<<(i)))==0 && (mask&(1<<j))==0)
                {
                    int newmask=(mask)|(1<<i);
                    newmask=newmask|(1<<j);
                    ma=max(ma,(ind+1)*__gcd(nums[j],nums[i])+recur(ind+1,newmask,nums));
                }
            }
        }
        return dp[ind][mask]=ma;
    }
    int maxScore(vector<int>& nums) {
        memset(dp,-1,sizeof(dp));
        n=nums.size();
        return recur(0,0,nums);
 
    }
};