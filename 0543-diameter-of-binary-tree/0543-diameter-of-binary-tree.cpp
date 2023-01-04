/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    
    int solve(TreeNode* root , int &cnt){
        //base case
        if(root == NULL) return 0;
        
        int lh = solve(root->left , cnt);
        int rh = solve(root->right , cnt);
         cnt = max(lh+rh+1 , cnt);
        
        //height
        return max(lh , rh)+1;
    }
    
    int diameterOfBinaryTree(TreeNode* root) {
        int cnt = 0;
        solve(root ,cnt);
        //edges = node-1
        return cnt-1;
    }
};