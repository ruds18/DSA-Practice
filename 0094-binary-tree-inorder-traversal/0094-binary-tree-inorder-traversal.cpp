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
    
    void solve(TreeNode* root  , vector<int>&ans){
        //recursion Inorder - L N R 
        //base case
        if(root == NULL) return;
        //Left
        solve(root->left , ans);
        // Node
        ans.push_back(root->val);
        //Right
        solve(root->right , ans);
        
    }
    vector<int> inorderTraversal(TreeNode* root) {
        vector<int>ans;
        solve(root, ans);
        return ans;
    }
};