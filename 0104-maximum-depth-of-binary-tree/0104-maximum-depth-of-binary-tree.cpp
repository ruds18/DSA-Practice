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
        if(!root) return 0;
        
        queue<TreeNode*>q;
        q.push(root);
        int ans=0;
        while(!q.empty()){
            int size =  q.size();
            ans++;
            for(int i=0  ; i<size;i++ ){
                auto topNode  = q.front();
                q.pop();
                if(topNode->left) q.push(topNode->left);
                if(topNode->right) q.push(topNode->right);
            }
        }
        return ans;
    }
};