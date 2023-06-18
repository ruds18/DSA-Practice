class Solution {
public:
    int distanceTraveled(int k, int x) {
int ans =0,y;
        while(k>=5&&x){
            ans += 50;
            x--;
            k -= 5;
            k++;
        }
        ans += (k*10);
        return ans;
    }
};