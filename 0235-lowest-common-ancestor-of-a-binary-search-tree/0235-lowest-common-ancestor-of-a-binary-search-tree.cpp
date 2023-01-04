/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */

class Solution {
public:
    TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
        //base case
        if(root == NULL) return NULL;
        // node found
        if(root == p || root == q) return root;
        
        //calls
       TreeNode* left =  lowestCommonAncestor(root->left, p ,q);
        TreeNode* right = lowestCommonAncestor(root->right , p ,q);
        
        //cases (backtrack)
        if(left && right) return root;
        if(left && !right) return left;
        if(!left && right) return right;
        
        return NULL;
    }
};