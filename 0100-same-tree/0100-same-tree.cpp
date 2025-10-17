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
    bool check(TreeNode* first, TreeNode* second) {
        if (first == nullptr && second != nullptr || first != nullptr && second == nullptr ) {
            return false;
        } else if (first == nullptr && second == nullptr) {
            return true;
        }
        bool flag1 = (first->val == second->val);

        bool flag2 = check(first->left, second->left);
        bool flag3 = check(first->right, second->right);
        return (flag1 && flag2 && flag3);
    }
    bool isSameTree(TreeNode* p, TreeNode* q) {
        return check(p, q);
    }
};