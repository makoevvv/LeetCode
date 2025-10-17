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
    int dfs(TreeNode* root, int pos, int curSum) {
        if (root != nullptr) {
            if (root->left == nullptr && root->right == nullptr && pos == 1) {
                return curSum + root->val;
            } else {
                return dfs(root->right, -1, dfs(root->left, 1, curSum));
            }
        }
        return curSum;
    }
    int sumOfLeftLeaves(TreeNode* root) {
        return dfs(root, 0, 0);
    }
};