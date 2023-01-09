class Solution {
public:
    int canCompleteCircuit(vector<int>& gas, vector<int>& cost) {
        int ans =0, fuel=0, n = gas.size() , totalDif=0 ;
        // Checking every index
        for(int i=0; i<n;i++){
            int dif = gas[i] - cost[i];
            totalDif += dif;
            fuel += dif;
            if(fuel<0){
                ans = i+1;
                fuel=0;
            }
        }
        return (totalDif<0) ?  -1 :  ans;
    }
};