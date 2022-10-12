class Solution 
{
    public:
    //Function to find if there is a celebrity in the party or not.
    int celebrity(vector<vector<int> >& M, int n) 
    {
        stack<int>st;
        //Step 1- Push all candiates
        for(int i=0 ;i<n;i++){
            st.push(i);
        }
        //Step 2 -> finding potential candidate
        while( st.size() > 1 ){
            int c1 = st.top();
            st.pop();
            int c2 = st.top();
            st.pop();
            
            if(M[c1][c2] == 1) st.push(c2); else st.push(c1);
        }
        int celeb = st.top();
        st.pop();
        
        //Step 3 -> check celebrity or not
        for (int i = 0; i < n; i++) {
            if (M[celeb][i] == 1) return -1;
        }
        
        for (int j = 0; j < n; j++) {
            if (j == celeb) continue;
            if (M[j][celeb] == 0) return -1;
        }
        
        return celeb;

    }
};