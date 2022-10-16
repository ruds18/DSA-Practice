class Solution {
public:
    string countAndSay(int n) {
        if(n==1) return "1";
        if(n==2)return "11";
        string ans= "11";
        
        for(int i=3 ;i<=n;i++){
            string temp = "";
            ans += "&";
            int cnt =1;
            for(int j=1 ;j<ans.size();j++){
                if(ans[j] != ans[j-1]){
                    temp = temp + to_string(cnt);
                    temp += ans[j-1];
                    cnt = 1;
                    
                }else{
                    cnt++;
                }
            }
            ans=temp;
        }
        return ans;
    }
};