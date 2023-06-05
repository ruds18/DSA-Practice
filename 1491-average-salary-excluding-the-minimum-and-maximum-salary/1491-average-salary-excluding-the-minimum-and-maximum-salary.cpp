class Solution {
public:
    double average(vector<int>& salary) {
        int maxi=salary[0];
        int mini = salary[0];
        int size = salary.size();
        double sum=0;
        for(auto s : salary){
            maxi = max(maxi ,s);
            mini = min(mini,s);
        }
        
        for(auto s: salary){
            if(s == mini || s == maxi) continue;
            else{
                sum += s;
            }
        }
        return (sum)/(size-2);
    }
};