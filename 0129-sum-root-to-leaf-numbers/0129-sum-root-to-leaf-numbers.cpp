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
    
    void getSum(TreeNode* root , int &ans , int number ){
        
        //base case
        if(root == NULL) {
            return;
        };
        
       number = number*10 + root->val;
        
          if(root->left == NULL && root->right == NULL){
            ans += number;
        }
        
        getSum(root->left,  ans, number);
        getSum(root->right , ans , number);

    }
    
    int sumNumbers(TreeNode* root) {
        int ans = 0 , temp =0;
        getSum(root , ans , temp);
        return ans;
    }
};