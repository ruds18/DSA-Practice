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
    int solve(TreeNode* root, int &cnt, int k){
        //base case
        if(!root) return NULL;
        
         //Left tree Search
         int left = solve(root->left, cnt, k);
        if(left ){
            return left;
        }
        //reached the Node
        cnt++;
        if(k==cnt) return root->val;
        
        //Right tree Search
        return solve(root->right, cnt , k);
        
    }
    int kthSmallest(TreeNode* root, int k) {
        //Inorder Traversal - > sorted array
        int cnt = 0;
        return solve(root, cnt, k);
    }
};