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
        // Iterative - level order traversal
        if(root==NULL)return 0;
        queue<TreeNode*>q;
        q.push(root);
        int cnt = 0;
        while(!q.empty()){
            int size = q.size();
            cnt++;
            for(int i =0; i<size; i++){
                TreeNode* front = q.front();
                q.pop();
                if(front->left) q.push(front->left);
                if(front->right)q.push(front->right);
            }
        }
        return cnt;
        
    }
};