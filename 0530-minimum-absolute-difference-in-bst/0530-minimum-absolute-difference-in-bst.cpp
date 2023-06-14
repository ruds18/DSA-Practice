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
     vector<int> inorderTraversalNodes;
    
    void inorderTraversal(TreeNode* root){
        //base case
        if(root == NULL){
            return;
        }
        //Left
        inorderTraversal(root->left);
        //Node
        inorderTraversalNodes.push_back(root->val);
        //Right
        inorderTraversal(root->right);
    }
    
    int getMinimumDifference(TreeNode* root) {
        inorderTraversal(root);
        int ans = INT_MAX;
       for(int i=1; i<inorderTraversalNodes.size();i++){
           ans = min((inorderTraversalNodes[i] - inorderTraversalNodes[i-1]) ,  ans);
       }
        return ans;
    }
};