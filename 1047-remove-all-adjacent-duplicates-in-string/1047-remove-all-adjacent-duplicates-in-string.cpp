class Solution {
public:
    string removeDuplicates(string s) {
        string ans="";
        int n =s.size();
        stack<char>st;
      
        st.push(s[0]);
        for(int i=1;i<n;i++){
            if(st.empty()) st.push(s[i]);
            else{
                 if(st.top() == s[i]) st.pop();
                  else st.push(s[i]);
            }
        }
        
        while(!st.empty()){
        ans += st.top();
        st.pop();
        }
        
        reverse(ans.begin(), ans.end());
        return ans;
    }
};