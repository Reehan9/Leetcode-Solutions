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
    bool findTarget(TreeNode* root, int k) {
        vector<int>check;
        unordered_map<int ,int>ele;
        inorder(root , check);
        for(int i = 0 ; i < check.size() ; i++){
            if(ele.find(k-check[i])!=ele.end()) return true;
            ele[check[i]] = i;
        }
        return 0;
    }
    void inorder(TreeNode* root ,vector<int> &check ){
        if(root){
            inorder(root->left , check);
            check.push_back(root->val);
            inorder(root->right  , check);
        }
    }
};
