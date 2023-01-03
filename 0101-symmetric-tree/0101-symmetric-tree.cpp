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
    bool isSymmetric(TreeNode* root) {
        // Iterative way
        queue<TreeNode*>q1;
        queue<TreeNode*>q2;
        
        q1.push(root->left );
        q2.push(root->right);
        
        while(!q1.empty() && !q2.empty()){
            TreeNode* leftNode = q1.front();
            q1.pop();
            TreeNode* rightNode = q2.front();
            q2.pop();
            
            //compare
             if(!leftNode && !rightNode) continue;
             if( leftNode== NULL || rightNode == NULL) return false;
            if(leftNode->val != rightNode->val) return false;
            
           
            
            //push elements
            q1.push(leftNode->left);
            q1.push(leftNode->right);
            q2.push(rightNode->right);
            q2.push(rightNode->left);
        }
        return true;
    }
};