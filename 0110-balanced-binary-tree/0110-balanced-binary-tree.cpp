// left right val
class Solution {
public:
    pair<bool , int> isBalancedFast(TreeNode* root){
        //edge case
        if(root == NULL) {
            pair<bool, int> p = make_pair(true, 0);
            return p;
        }
        
        pair<bool,int> left = isBalancedFast(root->left);
        pair<bool,int> right = isBalancedFast(root->right);
        
        bool ls = left.first;
        bool rs = right.first;
        bool diff = abs(left.second - right.second)  <=1 ; 
        
        pair<bool ,int> ans;
        ans.second = max(left.second , right.second) +1;
        if(ls && rs && diff){
            ans.first = true;
        }else{
            ans.first = false;
        }
        return ans;
    };
    bool isBalanced(TreeNode* root) {
      return isBalancedFast(root).first;
    }
};