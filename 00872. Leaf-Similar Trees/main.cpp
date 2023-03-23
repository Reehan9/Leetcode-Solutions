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
    bool leafSimilar(TreeNode* root1, TreeNode* root2) {
        vector<int>r1;
        vector<int>r2;
        checkSimilar(root1 , r1);
        checkSimilar(root2 , r2);
        return r1==r2;
    }
private:
    void checkSimilar(TreeNode*root , vector<int>&r){
        if(root){
            checkSimilar(root->left,r);
            if(!root->left&&!root->right) r.push_back(root->val);
            checkSimilar(root->right ,r);
        }
    }
};
