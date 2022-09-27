class Solution {
public:
    int lastStoneWeight(vector<int>& stones) {
        int last = stones.size();
        int final= 0;
        int count=0;
        
        if(last == 1) return stones[0];
        
        while(count != last-1){
            sort(stones.begin(), stones.end());
            stones[last-1] = stones[last-1] - stones[last-2];
            stones[last-2] = 0;
            count++;
        }
        return stones[last-1];
    }
    
};;