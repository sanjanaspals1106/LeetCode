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
    void inorder(TreeNode* root, vector<int> &order){
        if(root==NULL) return;
        inorder(root->left,order);
        order.push_back(root->val);
        inorder(root->right,order);
    }
    bool findTarget(TreeNode* root, int k) {
        vector<int> order;
        inorder(root,order);
        for(int i=0; i<order.size()-1; i++){
            int p=k-order[i];
            for(int j=i+1; j<order.size(); j++){
                if(order[j]==p) return true;
            }
        }
        return false;
    }
};