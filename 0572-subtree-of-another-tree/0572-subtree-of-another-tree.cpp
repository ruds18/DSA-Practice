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
    bool isSubtree(TreeNode* root, TreeNode* subRoot) {
        // Using Depth First Search
        
        if(!root) return false;
        
        if(isIdentical(root, subRoot)){
            return true;
        }
        
        // If not , go for the subtrees
        return isSubtree(root->left, subRoot) || isSubtree(root->right, subRoot);
    }
    
    bool isIdentical(TreeNode* node1, TreeNode* node2){
        if(node1 == NULL || node2 == NULL){
            return node1 == NULL && node2 == NULL;
        }
        
        return (node1->val == node2->val) && isIdentical(node1->left, node2->left) && isIdentical(node1->right, node2->right);
    }
};