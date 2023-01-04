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
    int maxDepth(TreeNode* root) {
        // height of a tree - recursive && iterative
        //base case
        if(root == NULL) return 0;
        // calls
        int left = maxDepth(root->left);
        int right  = maxDepth(root->right);
        
        return max(left, right) +1 ;
        
    }
};