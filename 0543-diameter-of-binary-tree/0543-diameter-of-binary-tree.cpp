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
    int ans = INT_MIN;
    int foo(TreeNode* root, int path) {
        if (root == nullptr) {
            return path;
        } else {
            int l = foo(root->left, path);
            int r = foo(root->right, path);
            ans = max(ans, l + r);
            return max(l, r) + 1;
        }
    }
    int diameterOfBinaryTree(TreeNode* root) {
        foo(root, 0);
        return ans;
    }
};