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
    int depth(TreeNode* cur_node, int cnt) {
        if (cur_node == nullptr) {
            return cnt;
        } else {
            int l = depth(cur_node->left, cnt + 1);
            int r = depth(cur_node->right, cnt + 1);
            if (l == -1 || r == -1 || abs(r - l) > 1) {
                return -1;
            }
            return max(l, r);
        }
    }
    bool isBalanced(TreeNode* root) {
        int k = depth(root, 0);
        cout << k;
        if (k == -1) {
            return false;
        }
        return true;
    }
};