class Solution {
public:
    int widthOfBinaryTree(TreeNode* root) {
        if(root == NULL) // if root is null 
            return 0;   // simply return zero
        
        int ans = 0; // variable to store answer
        
        // queue for level order traveral
        queue<pair<TreeNode*, int>> q; // pair contain { node, index}
        
        q.push({root, 1}); // intially push root node 
        
        // Implementing BFS
        while(q.empty() == false) // until queue is not empty
        {
            int size = q.size(); // take size of the queue
            
            // tells us minimum index at particular level
            int minAtLevel = q.front().second; 
            
            // declaring minimum and maximum variable used for finding width
            int mn, mx;
            
            // traverse from the queue
            for(int i= 0; i < size; i++)
            {
                // changes index of level by decreasing minimum index
                int curr_index = q.front().second - minAtLevel + 1; //+ 1 because we are using 1 based indexing,
                
                // take out current node
                TreeNode* node = q.front().first;
                q.pop(); // pop from the queue
                
                // remember the formula we discussed
            //width = (maximum index at level) - (minimum index at level) + 1
                
                if(i == 0) 
                    mn = curr_index; // minimum index at level
                
                if(i == size - 1)
                    mx = curr_index; //maximum index at level
                
                // push left and right for further calculation
				
                if(node -> left != NULL) //2   * i
                    q.push({node -> left, 2LL * curr_index});
                
                if(node -> right != NULL) //2   * i  + 1
                    q.push({node -> right, 2LL * curr_index + 1});
                   
            }
            ans = max(ans, mx - mn + 1); // update our answer
        }
        
        return ans; // finally return our answer
        
    }
};