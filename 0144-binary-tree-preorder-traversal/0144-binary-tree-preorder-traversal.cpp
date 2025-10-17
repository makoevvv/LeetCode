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
    vector <int> ans;
    void foo(TreeNode* root) {
        if (root != nullptr) {
            ans.push_back(root->val);
            foo(root->left);
            foo(root->right);
        }
    }
    vector<int> preorderTraversal(TreeNode* root) {
        foo(root);
        return ans;
    }
};