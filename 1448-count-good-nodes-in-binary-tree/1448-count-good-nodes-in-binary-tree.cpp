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
    void dfs(TreeNode* root, int maxSofar, int &count){
        if(root==nullptr) return;
        if(root->val>=maxSofar) count++;
        maxSofar = max(maxSofar, root->val);
        dfs(root->left, maxSofar,count);
        dfs(root->right,maxSofar,count);
    }
    int goodNodes(TreeNode* root) {
        if(root==nullptr) return 0;
        int count=0;
        dfs(root,root->val,count);
        return count;
    }
};