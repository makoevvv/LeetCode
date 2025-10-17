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
    int ans = 0;
    int foo(TreeNode* root) {
        if (root == nullptr) {
            return 0;
        } else {
            int l = foo(root->left);
            int r = foo(root->right);
            ans += abs(l - r);
            return l + r + root->val;
        }
    }
    int findTilt(TreeNode* root) {
        foo(root);
        return ans;
    }
};