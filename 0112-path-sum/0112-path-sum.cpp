class Solution {
public:
    bool hasPathSum(TreeNode* root, int targetSum) {
        if(root==nullptr) return false;
        if(root->left==nullptr && root->right==nullptr){
            if(targetSum==root->val){
                return true;
            }
        }
        int new_target=targetSum-root->val;
        return hasPathSum(root->left,new_target) || hasPathSum(root->right,new_target);
        

    }
};