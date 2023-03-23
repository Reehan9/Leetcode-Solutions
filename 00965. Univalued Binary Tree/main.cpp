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
   bool flag = 1;
   int ans;
public:
    bool isUnivalTree(TreeNode* root) {
        ans = root->val;
        traverse(root);
    return flag;
    }

   void traverse(TreeNode* root){
        if(root!=NULL){
        traverse(root->left);
        if(root->val!=ans) flag = 0;
        traverse(root->right);
    }
   }
};
