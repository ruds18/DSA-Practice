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
    vector<vector<int>> levelOrderBottom(TreeNode* root) {
        vector<vector<int>>ans;
           //edeg case
        if(root == NULL) return ans;
        queue<TreeNode*>q;
        q.push(root);
        while(!q.empty()){
            vector<int>result;
            for(int i=0 , size = q.size(); i<size ; i++){
                TreeNode* front = q.front();
                q.pop();
                result.push_back(front->val);
                if(front->left) q.push(front->left);
                if(front->right) q.push (front->right);
            }
            ans.push_back(result);
        }
        reverse(ans.begin(), ans.end());
        return ans;
    }
};