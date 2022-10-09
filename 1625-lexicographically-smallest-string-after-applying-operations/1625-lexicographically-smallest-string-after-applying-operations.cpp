class Solution {
public:
    string ans;
   
        //Doing by the DFS Approach
        string add(int a, string s){
            string ans;
            for(int i=0; i<s.size(); i++){
                if(i%2){
                    ans += ((s[i] - '0' + a)%10 + '0');
                }else{
                    ans += s[i];
                }
            }
            return ans;
        };
        
        string rot(int b, string s){
            string ans;
            int n = s.size();
            ans+= s.substr(n-b);
            ans+= s.substr(0,n-b);
            
            return ans;
        };
        
        void dfs(int a , int b, string s, set<string>& v){
            //already visited or not
            if(v.find(s) != v.end()){
                return ;
            }
            //Not present
            v.insert(s);
            //Minimizing ans
            ans = min(ans,s);
            //DFS call
            dfs(a,b,add(a,s), v);
            dfs(a,b,rot(b,s),v);
        };
    string findLexSmallestString(string s, int a, int b) {
        //Main function call
        ans=s;
        set<string>v;
        dfs(a,b,s,v);
        return ans;
    }
};