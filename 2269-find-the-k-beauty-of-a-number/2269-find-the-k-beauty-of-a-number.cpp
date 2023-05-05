class Solution {
public:
    int divisorSubstrings(int num, int k) {
        string number = to_string(num);
        int n = number.size();
        int count = 0;
        string localNum="";
        //first K window
        for(int i=0; i<k;i++){
            localNum.push_back(number[i]);
        }
        if(  num  % (stoi(localNum)) == 0) count++;
        
        //sliding window
        for(int i = k; i<n;i++){
            localNum.erase(0,1);
            localNum.push_back(number[i]);
            if(stoi(localNum) == 0) continue;
            if(num  % (stoi(localNum)) == 0) count++;
        }
        
        
        return count;
    }
};