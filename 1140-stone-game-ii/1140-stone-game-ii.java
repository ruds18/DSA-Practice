class Solution {
    public int stoneGameII(int[] piles) {
        if(piles.length == 0){
            return 0;
        }
        int[][] dp = new int[piles.length][piles.length];
        int[] suffixSum = new int[piles.length];
        suffixSum[suffixSum.length - 1] = piles[piles.length - 1];
        
        for(int i = piles.length - 2; i >= 0; i--){
            suffixSum[i] = suffixSum[i + 1] + piles[i];
        }
        
        return findMax(0, piles, suffixSum, dp, 1);
    }
    
    public int findMax(int index, int[] piles, int[] suffixSum, int[][] dp, int M){
        if(index == piles.length){
            return 0;
        }
        if(index + 2 * M >= piles.length){
            return suffixSum[index];
        }
        
        if(dp[index][M] != 0){
            return dp[index][M];
        }
        
        int result = 0;
        for(int i = 1; i <= 2 * M; i++){
            result = Math.max(result, suffixSum[index] - findMax(index + i, piles, suffixSum, dp, Math.max(M, i)));
        }
        
        return dp[index][M] = result;
    }
}