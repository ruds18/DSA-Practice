class Solution {
public:
    string shortestCommonSupersequence(string a, string b) {
        int m = a.size();
	   int n = b.size();
       vector<vector<int>>dp(m+1, vector<int>(n+1, 0));
       
       for(int index1=1;index1 <= m ;index1++){
           for(int index2=1;index2<=n;index2++){
               if(a[index1-1] == b[index2-1])
                    dp[index1][index2] = 1 + dp[index1-1][index2-1];
                else 
                    dp[index1][index2] = max(dp[index1-1][index2], dp[index1][index2-1]);
           }
       }

	  string ans="";
	  int i = m;
	  int j = n;

	  while(i>0 && j>0){
		  if(a[i-1] == b[j-1]){
			  ans += b[j-1];
			  i--;
			  j--;
		  }
		  else{
			  if(dp[i-1][j] > dp[i][j-1]){
				  //up
				  ans += a[i-1];
				  i--;
			  }
			  else{
				  //left
				  ans += b[j-1];
				  j--;
			  }
		  }
	  }
	  while(i>0){
		  ans += a[i-1];
		  i--;
	  }
	  while(j>0){
		  ans += b[j-1];
		  j--;
	  }

	  reverse(ans.begin(),ans.end());
	  return ans;
    }
};