class Solution {
public:
    bool validateStackSequences(vector<int>& pushed, vector<int>& popped) {
        int n = popped.size();
        int j=0;
        stack<int>st;
        
        for(auto i : pushed){
            st.push(i);
        while(!st.empty() &&j<n && st.top() == popped[j]){
                st.pop();
                j++;
            }
        }
        return j == n;
    }
};